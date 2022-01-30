class Solution:
    def naive(self,root):
        if root==None: return 0
        self.minD = float('inf')
        def dfs(tree,level):
            if tree==None:
                return
            if tree.left==None and tree.right==None:
                self.minD = min(self.minD,level+1)
                return
            dfs(tree.left,level+1)
            dfs(tree.right,level+1)
        dfs(root,0)
        return self.minD
