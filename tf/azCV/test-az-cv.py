import argparse
import io
import os
import sys
import time
import urllib
from array import array

import matplotlib.pyplot as plt
import numpy as np
from azure.cognitiveservices.vision.computervision import ComputerVisionClient
from azure.cognitiveservices.vision.computervision.models import (
    OperationStatusCodes, VisualFeatureTypes)
from msrest.authentication import CognitiveServicesCredentials
from PIL import Image

if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument('--endpt', type=str, required=True)
    p.add_argument('--subkey', type=str, required=True)
    args = p.parse_args()
    client = ComputerVisionClient(args.endpt,  
        CognitiveServicesCredentials(args.subkey))
    
    read_image_url = "https://raw.githubusercontent.com/MicrosoftDocs/azure-docs/master/articles/cognitive-services/Computer-vision/Images/readsample.jpg"
    f = urllib.request.urlopen(read_image_url)
    img = Image.open(io.BytesIO(f.read()))
    img = np.array(img)

    read_response = client.read(read_image_url,  raw=True)
    read_operation_location = read_response.headers["Operation-Location"]
    operation_id = read_operation_location.split("/")[-1]
    while True:
        read_result = client.get_read_result(operation_id)
        if read_result.status not in ['notStarted', 'running']:
            break
        time.sleep(1)

    plt.imshow(img)
    if read_result.status == OperationStatusCodes.succeeded:
        for text_result in read_result.analyze_result.read_results:
            for line in text_result.lines:
                print(line.text)
                bbox = line.bounding_box
                print(bbox)
                plt.scatter(bbox[::2],bbox[1::2])
    print()
    plt.show()

