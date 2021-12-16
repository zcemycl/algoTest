from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root):
        res = []
        def inOrder(tree):
            if tree==None: return
            inOrder(tree.left)
            res.append(tree.val)
            inOrder(tree.right)
        inOrder(root)
        return res
