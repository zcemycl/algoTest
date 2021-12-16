from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root,val):
        if root==None: return None
        if val>root.val:
            return Solution.naive(root.right,val)
        elif val<root.val:
            return Solution.naive(root.left,val)
        elif val==root.val:
            return root
