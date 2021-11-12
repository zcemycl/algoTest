
class Solution:
    @staticmethod
    def naive(word):
        count = []
        s = set("0123456789")
        prev = ""
        for tmps in word:
            if tmps in s:
                prev+=tmps
            else:
                if len(prev)!=0 and int(prev) not in count:
                    count.append(int(prev))
                prev = ""
        if len(prev)!=0 and int(prev) not in count:
            count.append(int(prev))
        return len(count)