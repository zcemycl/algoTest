import string
class Solution:
    @staticmethod
    def naive(coordinates):
        c2i = {c:i for i,c in enumerate(string.ascii_lowercase[:8])}
        characterIdx = c2i[coordinates[0]]
        numIdx = int(coordinates[1])-1
        return (characterIdx+numIdx)%2==1
