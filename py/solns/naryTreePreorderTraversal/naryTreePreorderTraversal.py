class Node:
    def __init__(self,val=None,children=None):
        self.val = val
        self.children = children if children is not None else []

class Solution:
    @staticmethod
    def naive(root):
        res = []
        def preOrder(tree):
            if tree==None: return 
            res.append(tree.val)
            for child in tree.children:
                preOrder(child)
        preOrder(root)
        return res