class Solution:
    def naive(self,root):
        self.count = Counter()
        self.nodes = {}
        def recur(tree):
            if tree==None:
                return (None,)
            left = recur(tree.left)
            right = recur(tree.right)
            branch = (tree.val,)+left+right
            self.count[branch]+=1
            self.nodes[branch]=tree
            return branch
        recur(root)
        res = []
        for key in self.count:
            if self.count[key]>1:
                res.append(self.nodes[key])
        return res