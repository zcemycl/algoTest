class Solution:
    @staticmethod
    def naive(digits):
        Len = len(digits)
        s = 1
        for i in range(Len):
            total = digits[Len-i-1]+s
            s,r = divmod(total,10)
            digits[Len-i-1] = r
        if s!=0:
            digits.insert(0,s)
        return digits