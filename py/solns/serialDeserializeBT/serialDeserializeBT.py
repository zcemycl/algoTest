from solns.treeNode.treeNode import *
from solns.sameTree.sameTree import *
class Solution(Solution):
    @staticmethod
    def serialize(root):
        res = []
        def preOrder(tree):
            if tree==None: 
                res.append("null")
                return 
            res.append(str(tree.val))
            preOrder(tree.left)
            preOrder(tree.right)
        preOrder(root)
        return ",".join(res)
    @staticmethod
    def deserialize(data):
        stream = data.split(",")
        def preOrder(i):
            i+=1
            if stream[i-1]=="null":
                return None,i
            t = TreeNode(int(stream[i-1]))
            t.left,i = preOrder(i)
            t.right,i = preOrder(i)
            return t,i
        res,_ = preOrder(0)
        return res