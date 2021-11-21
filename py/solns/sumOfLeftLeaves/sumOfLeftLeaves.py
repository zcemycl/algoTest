from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root):
        s = 0
        if root:
            if root.left and root.left.left is None and root.left.right is None:
                s += root.left.val
            if root.left and (root.left.left or root.left.right):
                s += Solution.naive(root.left)
            if root.right and (root.right.left or root.right.right):
                s += Solution.naive(root.right)
        return s
