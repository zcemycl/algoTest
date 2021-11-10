import re
class Solution:
    @staticmethod
    def regex(s):
        return re.sub(r"[aeiou]","",s)
