from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root,low,high):
        def dfs(tree,val):
            if tree==None: return val
            if low<=tree.val<=high:
                val+=tree.val
            val = dfs(tree.left,val)
            val = dfs(tree.right,val)
            return val
        res = dfs(root,0)
        return res