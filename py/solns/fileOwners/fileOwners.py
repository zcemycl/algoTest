
class Solution:
    @staticmethod
    def naive(files):
        d = dict()
        for k,v in files.items():
            if v not in d:
                d[v] = [k]
            else:
                d[v].append(k)
        return d
