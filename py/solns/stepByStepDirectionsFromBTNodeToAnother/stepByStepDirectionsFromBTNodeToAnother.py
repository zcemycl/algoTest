class Solution:
    def naive(self,root,startValue,destValue):
        self.adjLs = {}
        def recur(tree,LorR,parent=-1):
            if tree==None:
                return
            if startValue in self.adjLs and destValue in self.adjLs:
                return 
            if parent!=-1:
                dictval = self.adjLs.get(tree.val,dict())
                dictval[parent]="U"
                self.adjLs[tree.val]=dictval
                dictval = self.adjLs.get(parent,dict())
                dictval[tree.val]=LorR
                self.adjLs[parent]=dictval
            recur(tree.left,"L",tree.val)
            recur(tree.right,"R",tree.val)
        recur(root,"L")
        # print(self.adjLs)
        visited,self.steps = set(),""
        def dfs(node,steps=""):
            if node==destValue:
                self.steps=steps
                return 
            visited.add(node)
            for child in self.adjLs[node]:
                if child not in visited:
                    dfs(child,steps+self.adjLs[node][child])
        dfs(startValue)
        # print(self.steps)
        return self.steps