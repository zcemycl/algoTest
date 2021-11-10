from solns.treeNode.treeNode import *

class Solution:
    @staticmethod
    def recursive(p,q):
        if not p or not q:
            return p==q
        if p.val!=q.val:
            return False
        return Solution.recursive(p.left,q.left) and \
            Solution.recursive(p.right,q.right)
