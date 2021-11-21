from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root,targetSum):
        if root is None: return False
        result = False
        if root.left is None and root.right is None:
            return root.val==targetSum
        if root.left and Solution.naive(root.left,targetSum-root.val):
            result = True
        if root.right and Solution.naive(root.right,targetSum-root.val):
            result = True
        return result