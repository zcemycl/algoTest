from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root):
        def dfs(tree,val):
            if tree==None: return val
            val += max(dfs(tree.left,val),dfs(tree.right,val))
            val += 1
            return val
        return dfs(root,0)-1