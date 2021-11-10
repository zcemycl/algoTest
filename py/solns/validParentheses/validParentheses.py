
class Solution:
    @staticmethod
    def naive(s):
        stack = []
        d = {"(":")","{":"}","[":"]"}
        for tmps in s:
            if tmps in d:
                stack.append(d[tmps])
            if tmps in d.values():
                if len(stack)==0: return False
                tmp = stack.pop()
                if tmp!=tmps:
                    return False
        return len(stack)==0