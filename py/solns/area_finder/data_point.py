class DataPoint:
    __EPSILON = 1e-7

    def __hash__(self) -> int:
        return int(
            31 * (1 / self.__EPSILON) * self.x + (1 / self.__EPSILON) * self.y)

    def __init__(self, x=0.0, y=0.0):
        self.x = x
        self.y = y

    def __eq__(self, other: object) -> bool:
        return isinstance(other, DataPoint) and abs(
            self.x - other.x) < self.__EPSILON and abs(
            self.y - other.y) < self.__EPSILON

    def __repr__(self) -> str:
        return "Point: x={} y={}".format(self.x, self.y)
