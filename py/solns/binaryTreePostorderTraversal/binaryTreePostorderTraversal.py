from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root):
        res = []
        def postOrder(tree):
            if tree==None: return 
            postOrder(tree.left)
            postOrder(tree.right)
            res.append(tree.val) 
        postOrder(root)
        return res
