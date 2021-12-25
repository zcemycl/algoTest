from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root):
        def dfs(tree,val):
            if tree==None: return val
            left = dfs(tree.left,val)
            right = dfs(tree.right,val)
            return max(left,right)+1
        return dfs(root,0)
