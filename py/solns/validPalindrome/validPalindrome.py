import string
class Solution:
    @staticmethod
    def naive(s):
        ref = string.ascii_letters+string.digits
        l,r = 0,len(s)-1
        while l<=r:
            if s[l] not in ref:
                l+=1
                continue
            if s[r] not in ref:
                r-=1
                continue
            if s[l] in ref and s[r] in ref:
                if s[l].lower()!=s[r].lower():
                    return False
                else:
                    l+=1
                    r-=1
        return True