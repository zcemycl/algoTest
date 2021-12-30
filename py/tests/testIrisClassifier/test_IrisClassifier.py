import unittest
from parameterized import parameterized as p
from solns.irisClassifier.irisClassifier import *

class UnitTest_IrisClassifier(unittest.TestCase):
    @p.expand([
        # [0.8,True]
    ], skip_on_empty=True)
    def test_naive(self,threshold,expected):
        import numpy as np
        from sklearn.model_selection import train_test_split
        from sklearn import datasets,metrics
        iris = datasets.load_iris()
        X_train,X_test,y_train,y_test = \
            train_test_split(iris.data, iris.target,
                test_size=0.3, random_state=0)
        y_pred = Solution.train_and_predict(X_train,y_train,X_test)
        if y_pred is not None:
            self.assertEqual(metrics.accuracy_score(y_test,
                y_pred)>threshold,expected)
