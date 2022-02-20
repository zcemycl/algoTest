class Solution:
    def naive(self,root):
        if root==None: return []
        self.maxLevel,levels = -1,dict()
        def recur(tree,level):
            if tree==None:
                self.maxLevel=max(self.maxLevel,level-1)
                return 
            elements = levels.get(level,[])
            if level%2==0:
                elements.append(tree.val)
            elif level%2==1:
                elements=[tree.val]+elements
            levels[level]=elements
            recur(tree.left,level+1)
            recur(tree.right,level+1)
        recur(root,0)
        return list(levels.values())