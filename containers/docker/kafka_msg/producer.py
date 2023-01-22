import abc
import pdb
from time import time, sleep
from json import dumps
from datetime import datetime
from kafka import KafkaProducer
from aiokafka import AIOKafkaProducer
from sqlmodel import Field, SQLModel
import asyncio

from pydantic import BaseModel, conlist
import orjson
from typing import Dict, List, Optional, Tuple, Type, TypeVar

T = TypeVar("T")

class Visitor(SQLModel, table=True):
    id: Optional[int] = Field(default=None, primary_key=True)
    ip: str
    topic: str


class KafkaMsg(abc.ABC, BaseModel):
    def serialise(self) -> bytes:
        return orjson.dumps(
            self.dict(exclude_none=True),
            option=(orjson.OPT_SERIALIZE_NUMPY | orjson.OPT_OMIT_MICROSECONDS)
        )

    @classmethod
    def deserialise(cls: Type[T], payload:bytes) -> T:
        return cls.parse_obj(orjson.loads(payload))

    @property
    def kafka_key(self):
        return None


class CollectedVisitorsMsg(KafkaMsg):
    visitors: List[Visitor]
    created_at: datetime = Field(default_factory=datetime.utcnow)
    meta: Dict = Field(default_factory=dict)

async def send(msg):
    producer = AIOKafkaProducer(
        bootstrap_servers=['localhost:9092'],
        value_serializer=lambda x: dumps(x).encode('utf-8')
    )
    await producer.start()
    try:
        await producer.send_and_wait('topic_test', value=msg)
    finally:
        # Wait for all pending messages to be delivered or expire.
        await producer.stop()
    
def main():
    producer = KafkaProducer(
        bootstrap_servers=['localhost:9092'],
        # value_serializer=lambda x: dumps(x).encode('utf-8')
    )

    for j in range(10):
        print("Iteration", j)
        data = {'counter': j}
        t1 = time()
        producer.send('topic_test', value=dumps(data).encode('utf-8'))
        t2 = time()
        asyncio.run(send(data))
        print(t2-t1, time()-t2)

    sleep(0.5)

    topics = ['Knowledge Graph', 'Visitor Dashboard', '3d Game', 'Login', 'Forget']
    for j in range(5):
        part = Visitor(id=j, ip='192.168.1.4', topic=topics[j])
        print(part)
        kafka_visitor = CollectedVisitorsMsg(visitors=[part])
        producer.send('topic_test', kafka_visitor.serialise())
        sleep(.5)

if __name__ == "__main__":
    main()