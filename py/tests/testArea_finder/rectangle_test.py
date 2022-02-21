import unittest

from solns.area_finder.data_point import DataPoint
from solns.area_finder.rectangle import Rectangle


class RectangleTestCase(unittest.TestCase):
    def test_null_rectangle(self):
        rect = Rectangle()
        point = DataPoint(0, 0)
        self.assertFalse(rect.contains(point))

    def test_inside(self):
        rect = Rectangle(0, 0, 2, 2)
        point = DataPoint(1, 1)
        self.assertTrue(rect.contains(point))

    def test_outside(self):
        rect = Rectangle(0, 0, 2, 2)
        point = DataPoint(3, 3)
        self.assertFalse(rect.contains(point))


if __name__ == '__main__':
    unittest.main()
