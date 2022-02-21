import unittest
from multiset import Multiset
from solns.area_finder.area_finder import AreaFinder
from solns.area_finder.brute_force_area_finder import BruteForceAreaFinder
from solns.area_finder.data_point import DataPoint
from solns.area_finder.data_set import DataSet
from solns.area_finder.point_consumer import PointConsumer
from solns.area_finder.rectangle import Rectangle
import os
current = os.path.dirname(os.path.realpath(__file__))

class AreaFinderTestCase(unittest.TestCase):
    __DATASET_CSV = current+"/dataset.csv"
    __EXPECTED_DATASET_CSV = current+"/expected_dataset.csv"
    __dataset = None
    __expected_result = None
    __rect = None

    @classmethod
    def setUpClass(cls):
        cls.__load_data()

    @classmethod
    def __load_data(cls):
        cls.__dataset = DataSet.read_data_points(cls.__DATASET_CSV)
        cls.__expected_result = DataSet.read_data_points(
            cls.__EXPECTED_DATASET_CSV)
        cls.__rect = Rectangle(-0.1, -0.1, 0.1, 0.1)

    def test_brute_force_area_finder_with_large_dataset(self):
        self.__test_large_dataset(
            BruteForceAreaFinder.construct_from(data_points=self.__dataset))

    def __test_large_dataset(self, finder: AreaFinder):
        collector = PointCollector()
        finder.find_points_inside(self.__rect, collector)
        actual_result = collector.get_consumed_points()
        self.__are_identical(actual_result, self.__expected_result)

    def __are_identical(self, actual_result: [DataPoint],
        expected_result: [DataPoint]):
        set_actual = Multiset(actual_result)
        set_expected = Multiset(expected_result)
        self.assertTrue(set_actual == set_expected)


class PointCollector(PointConsumer):
    def __init__(self):
        self.DataPointList = []

    def consume_point(self, point: DataPoint):
        self.DataPointList.append(point)

    def get_consumed_points(self) -> [DataPoint]:
        return self.DataPointList


if __name__ == '__main__':
    unittest.main()
