from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def lca(root,v1,v2):
        if v1>v2:
            return Solution.lca(root,v2,v1)
        if root==None:
            return None
        if root.val>v2:
            return Solution.lca(root.left,v1,v2)
        elif root.val<v1:
            return Solution.lca(root.right,v1,v2)
        elif v1<=root.val<=v2:
            return root
