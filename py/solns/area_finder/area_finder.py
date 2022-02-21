from abc import ABC, abstractmethod
from .point_consumer import PointConsumer
from .rectangle import Rectangle


class AreaFinder(ABC):

    @abstractmethod
    def find_points_inside(self, rectangle: Rectangle,
        consumer: PointConsumer):
        pass
