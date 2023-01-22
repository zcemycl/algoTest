from kafka import KafkaConsumer
from aiokafka import AIOKafkaConsumer
from json import loads
from time import sleep
from producer import *

def main():
    consumer = KafkaConsumer(
        'topic_test',
        bootstrap_servers=['localhost:9092'],
        auto_offset_reset='earliest',
        enable_auto_commit=True,
        group_id='my-group-id',
        # value_deserializer=lambda x: loads(x.decode('utf-8'))
    )
    for event in consumer:
        print(event)
        event_data = event.value
        # Do whatever you want
        event_data = loads(event_data.decode('utf-8'))
        print(event_data)
        try:
            print(CollectedVisitorsMsg.deserialise(event.value))
        except:
            pass
        print('----------')

if __name__ == "__main__":
    main()