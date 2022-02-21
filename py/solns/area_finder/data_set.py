import csv

from .data_point import DataPoint


class DataSet:
    @staticmethod
    def read_data_points(file_name) -> [DataPoint]:
        data_points = []
        with open(file_name) as csv_file:
            csv_reader = csv.reader(csv_file, delimiter=';')
            for row in csv_reader:
                data_points.append(DataPoint(float(row[0]), float(row[1])))
        return data_points
