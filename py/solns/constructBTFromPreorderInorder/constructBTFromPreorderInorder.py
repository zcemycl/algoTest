from solns.treeNode.treeNode import *
from solns.sameTree.sameTree import *
class Solution(Solution):
    def buildTree(self,preorder,inorder):
        self.m = 0
        def dfs(inorder):
            if len(inorder)==0: return None
            t = TreeNode(preorder[self.m])
            ind = inorder.index(preorder[self.m])
            self.m+=1
            t.left = dfs(inorder[:ind])
            t.right = dfs(inorder[ind+1:])
            return t
        res = dfs(inorder)
        return res
