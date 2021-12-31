
class Solution:
    @staticmethod
    def naive(x):
        i,res = 0,0
        while True:
            total_i_digits = 10**(i+1)-10**i
            if total_i_digits*(i+1)>=x: 
                res+=(x/(i+1))
                return res
            else:
                x-=total_i_digits*(i+1)
                res+=total_i_digits
            i+=1