
class Solution:
    @staticmethod
    def naive(arr):
        return sorted(arr,key=lambda x:(bin(x).count("1"),x))
