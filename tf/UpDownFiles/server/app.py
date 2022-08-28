import argparse
import base64
import io

import numpy as np
import pandas as pd
from flask import Flask, jsonify, render_template, request, send_file

app = Flask(__name__)

@app.route("/")
def home():
    return "<h4>Hello Flask! Bye Flask!</h4>"

@app.route("/summary", methods=["GET", "POST"])
def summary():
    if request.method == "GET":
        content = request.get_json()

        try:
            decoded = base64.b64decode(content['data'])
            if 'csv' in content['filename']:
                # Assume that the user uploaded a CSV file
                df = pd.read_csv(
                    io.StringIO(decoded.decode('utf-8')))
            elif 'xls' in content['filename']:
                # Assume that the user uploaded an excel file
                df = pd.read_excel(io.BytesIO(decoded))
            df_tmp = df["contributor_occupation"]\
                .value_counts()\
                .rename_axis('contributor_occupation')\
                .reset_index(name='counts')
        except Exception as e:
            print(e)
            return jsonify({'data': None})
    return jsonify(df_tmp.to_dict())

if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument('--host', type=str, default="0.0.0.0")
    p.add_argument('--port', type=str, default=5000)
    p.add_argument('--dev', type=bool, default=True)
    args = p.parse_args()
    app.run(host=args.host, port=args.port, debug=args.dev)