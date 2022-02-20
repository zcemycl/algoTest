import copy
class Solution:
    @staticmethod
    def naive(root):
        root_ = copy.deepcopy(root)
        def flip(tree):
            if tree==None:
                return
            tree.left,tree.right = tree.right,tree.left
            flip(tree.left)
            flip(tree.right)
        def equal(ra,rb):
            if ra==None and rb==None:
                return True
            elif ra==None and rb!=None:
                return False
            elif ra!=None and rb==None:
                return False
            if ra.val != rb.val:
                return False
            return equal(ra.left,rb.left) and equal(ra.right,rb.right)
        flip(root_)
        return equal(root,root_)
