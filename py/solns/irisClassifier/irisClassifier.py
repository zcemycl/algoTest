
class Solution:
    @staticmethod
    def train_and_predict(train_input_features, train_outputs, prediction_features):
        from sklearn import svm
        """
        :param train_input_features: (numpy.array) A two-dimensional NumPy array where each element
                            is an array that contains: sepal length, sepal width, petal length, and petal width   
        :param train_outputs: (numpy.array) A one-dimensional NumPy array where each element
                            is a number representing the species of iris which is described in
                            the same row of train_input_features. 0 represents Iris setosa,
                            1 represents Iris versicolor, and 2 represents Iris virginica.
        :param prediction_features: (numpy.array) A two-dimensional NumPy array where each element
                            is an array that contains: sepal length, sepal width, petal length, and petal width
        :returns: (list) The function should return an iterable (like list or numpy.ndarray) of the predicted 
                            iris species, one for each item in prediction_features
        """   
        clf = svm.SVC()
        clf.fit(train_input_features, train_outputs)
        return clf.predict(prediction_features)
