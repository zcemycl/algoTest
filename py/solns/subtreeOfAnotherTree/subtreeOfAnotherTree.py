from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root,subRoot):
        def isSameTree(p,q):
            if p==None and q==None: return True
            if p==None or q==None: return False
            if p.val!=q.val: return False
            return isSameTree(p.left,q.left) and isSameTree(p.right,q.right)
        def dfs(tree,subTree):
            if tree==None: return False
            if tree.val==subTree.val:
                if isSameTree(tree,subTree): return True
            return dfs(tree.left,subTree) or dfs(tree.right,subTree)
        return dfs(root,subRoot)