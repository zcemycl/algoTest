from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root):
        def recur(tree,acc):
            if tree==None:
                return 0,acc
            right,acc = recur(tree.right,acc)
            tmp=tree.val+acc
            left,acc = recur(tree.left,tree.val+acc)
            tree.val = tmp
            return left,acc
        recur(root,0)
        return root
