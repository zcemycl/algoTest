class Solution:
    @staticmethod
    def naive(root):
        levelMap = dict()
        rank=lambda x,a:2*x+a
        def dfs(tree,level,idx):
            if tree==None:
                return
            levelMap[level]=levelMap.get(level,[])+[idx]
            dfs(tree.left,level+1,rank(idx,0))
            dfs(tree.right,level+1,rank(idx,1))
        dfs(root,0,rank(0,0))
        maxWidth=0
        for itm in levelMap.values():
            maxWidth = max(itm[-1]-itm[0]+1,maxWidth)
        return maxWidth
