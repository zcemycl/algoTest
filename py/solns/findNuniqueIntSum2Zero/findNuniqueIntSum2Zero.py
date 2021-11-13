
class Solution:
    @staticmethod
    def naive(n):
        result = []
        if n%2==1: result.append(0)
        for i in range(n//2):
            tmp = i+1
            result.append(tmp)
            result.append(-tmp)
        return result

