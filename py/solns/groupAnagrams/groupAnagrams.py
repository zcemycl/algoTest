from collections import defaultdict
class Solution:
    @staticmethod
    def naive(strs):
        hashTable = defaultdict(list)
        def turn2hash(s):
            h = [0]*26
            for c in s:
                h[ord(c)-ord('a')]+=1
            hashTable[tuple(h)].append(s)
        for s in strs:
            turn2hash(s)
        return list(hashTable.values())