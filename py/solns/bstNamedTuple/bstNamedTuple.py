from collections import namedtuple

Node = namedtuple('Node',['left','right','value'])

class Solution:
    @staticmethod
    def contains(root,value):
        if root==None: return False
        if root.value>value: 
            return Solution.contains(root.left,value)
        elif root.value<value:
            return Solution.contains(root.right,value)
        else:
            return True
