from solns.treeNode.treeNode import *
from collections import defaultdict
class Solution:
    @staticmethod
    def naive(root):
        d = defaultdict(list)
        def dfs(tree,prev):
            if tree==None: return
            d[prev+1].append(tree.val)
            dfs(tree.left,prev+1)
            dfs(tree.right,prev+1)
        dfs(root,-1)
        return list(d.values())
