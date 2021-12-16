from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root):
        res = []
        def preOrder(tree):
            if tree==None: return
            res.append(tree.val)
            preOrder(tree.left)
            preOrder(tree.right)
        preOrder(root)
        return res