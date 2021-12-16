class Node:
    def __init__(self,val=None,children=None):
        self.val = val
        self.children = children if children is not None else []

class Solution:
    @staticmethod
    def naive(root):
        res = []
        def postOrder(tree):
            if tree==None: return 
            for child in tree.children:
                postOrder(child)
            res.append(tree.val)
        postOrder(root)
        return res
