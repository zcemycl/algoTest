class Solution:
    def naive(self,root):
        self.res = 0
        def dfs(tree,s):
            s_ = s*10+tree.val
            if tree.left==None and tree.right==None:
                self.res+=s_
                return 
            if tree.left:
                dfs(tree.left,s_)
            if tree.right:
                dfs(tree.right,s_)
        dfs(root,0)
        return self.res