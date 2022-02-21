from .area_finder import AreaFinder
from .point_consumer import PointConsumer
from .rectangle import Rectangle
from .data_point import DataPoint


class BruteForceAreaFinder(AreaFinder):
    __create_key = object()

    @classmethod
    def construct_from(cls, data_points: [DataPoint]) -> AreaFinder:
        return BruteForceAreaFinder(cls.__create_key, data_points)

    # private constructor
    def __init__(self, create_key, data_points: [DataPoint]):
        assert (create_key == BruteForceAreaFinder.__create_key)
        self.full_dataset = data_points

    def find_points_inside(self, rectangle: Rectangle,
        consumer: PointConsumer):
        for data_point in self.full_dataset:
            if rectangle.contains(data_point):
                consumer.consume_point(data_point)