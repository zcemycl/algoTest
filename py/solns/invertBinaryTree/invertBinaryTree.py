from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root):
        def invert(tree):
            if tree==None: return tree
            tree.left,tree.right=tree.right,tree.left
            invert(tree.left)
            invert(tree.right)
        invert(root)
        return root