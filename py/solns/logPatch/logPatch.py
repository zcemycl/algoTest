import math
class Solution:
    @staticmethod
    def add_patch():
        def log100(arg):
            return math.log(arg,100)
        math.log100 = log100
        