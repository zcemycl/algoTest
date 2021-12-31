from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def checkBST(root):
        def inRange(tree,low,high):
            if tree==None: return True
            if low<tree.val<high:
                return inRange(tree.left,low,tree.val) \
                    and inRange(tree.right,tree.val,high)
            else:
                return False
        return inRange(root,-float('inf'),float('inf'))