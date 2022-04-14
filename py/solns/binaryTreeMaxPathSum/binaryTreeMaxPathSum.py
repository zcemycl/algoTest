from solns.treeNode.treeNode import *
class Solution:
    def naive(self,root):
        self.res = -float('inf')
        def recur(tree):
            if tree==None:
                return 0
            left = max(recur(tree.left),0)
            right = max(recur(tree.right),0)
            p = tree.val+left+right
            self.res = max(self.res,p)
            return tree.val+max(left,right)
           
        _ = recur(root)
        return self.res
