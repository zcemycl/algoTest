class Solution:
    def naive(self,root):
        if root==None: return []
        self.maxLevel,levels = -1,dict()
        def recur(tree,level):
            if tree==None:
                self.maxLevel=max(self.maxLevel,level-1)   
                return 
            elements = levels.get(level,[])
            elements.append(tree.val)
            levels[level]=elements
            recur(tree.left,level+1)
            recur(tree.right,level+1)
        recur(root,0)
        res = []
        for i in range(self.maxLevel,-1,-1):
            res.append(levels[i])
        return res
