from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root,k):
        d = dict()
        def dfs(tree,index):
            if tree==None: return index
            if k in d: return index
            index = dfs(tree.left,index)
            index+=1
            d[index]=tree.val
            index = dfs(tree.right,index)
            return index
        _ = dfs(root,0)
        return d[k]
