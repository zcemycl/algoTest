from collections import Counter
class Solution:
    @staticmethod
    def naive(changed):
        res,L = [],len(changed)
        if L%2==1: return []
        changed.sort()
        counter = Counter(changed)
        for idx,val in enumerate(changed):
            if not counter[val]:
                continue
            counter[val]-=1
            target = 2*val
            if counter[target]==0:
                return []
            else:
                counter[target]-=1
                res.append(val)
            
        return res