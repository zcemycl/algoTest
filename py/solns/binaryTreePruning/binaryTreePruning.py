from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root):
        def dfs(tree):
            if tree==None: return True
            if dfs(tree.left):
                tree.left = None
            if dfs(tree.right):
                tree.right = None
            return tree.val==0 and dfs(tree.left) and dfs(tree.right)
        new = TreeNode(1,left=root)
        dfs(new)
        return new.left