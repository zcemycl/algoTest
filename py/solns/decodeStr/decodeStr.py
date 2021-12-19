import string
class Solution:
    @staticmethod
    def naive(s):
        numStack,alpStack = [],[]
        cur,k = "",0
        for c in s:
            # print(numStack,alpStack)
            if c in string.digits:
                k = 10*k+int(c)
            elif c == "[":
                numStack.append(k)
                alpStack.append(cur)
                cur = ""
                k = 0
            elif c == "]":
                dec = alpStack.pop()
                n = numStack.pop()
                for _ in range(n):
                    dec+=cur
                cur = dec
            else:
                cur += c
            # print(numStack,alpStack)
        return cur