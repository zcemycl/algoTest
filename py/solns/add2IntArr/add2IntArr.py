
class Solution:
    @staticmethod
    def naive(num,k):
        Len = len(num)
        for i in range(Len):
            total = num[Len-i-1]+k%10
            num[Len-i-1]=total%10
            k //= 10
            k += total//10
        while k!=0:
            num.insert(0,k%10)
            k //= 10
        return num
