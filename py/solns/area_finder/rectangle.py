import math

from .data_point import DataPoint


class Rectangle:

    def __init__(self, x1=math.inf, y1=math.inf, x2=-math.inf, y2=-math.inf):
        self.x1 = x1
        self.y1 = y1
        self.x2 = x2
        self.y2 = y2

    def contains(self, point: DataPoint) -> bool:
        if self.x1<point.x<self.x2 and self.y1<point.y<self.y2:
            return True
        return False
