from abc import ABC, abstractmethod

from .data_point import DataPoint


class PointConsumer(ABC):
    
    @abstractmethod
    def consume_point(self, point: DataPoint):
        pass
