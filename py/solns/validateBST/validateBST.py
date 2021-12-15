from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root):
        def dfs(tree,low,high):
            if tree==None: return True
            if tree.val<=low or tree.val>=high:
                return False
            return dfs(tree.left,low,tree.val) and dfs(tree.right,tree.val,high)
        return dfs(root,-float('inf'),float('inf'))