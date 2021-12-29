from collections import deque
class TrainComposition:
    
    def __init__(self):
        self.train = deque()
    
    def attach_wagon_from_left(self, wagonId):
        """
        :param wagonId: (int) The number of the wagon to attach to the left
        """
        self.train.appendleft(wagonId)
    
    def attach_wagon_from_right(self, wagonId):
        """
        :param wagonId: (int) The number of the wagon to attach to the right
        """
        self.train.append(wagonId)

    def detach_wagon_from_left(self):
        """
        :returns: (int) The number of the wagon detached from left
        """
        return self.train.popleft()
    
    def detach_wagon_from_right(self):
        """
        :returns: (int) The number of the wagon detached from right
        """
        return self.train.pop()