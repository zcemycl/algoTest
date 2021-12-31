
class Solution:
    @staticmethod
    def decodeHuff(root,s):
        res,tmp = "",root
        for i,c in enumerate(s):
            if c=="0":
                tmp = tmp.left
            elif c=="1":
                tmp = tmp.right
            if tmp.left==None and tmp.right==None:
                res+=tmp.data
                tmp = root
        return res

