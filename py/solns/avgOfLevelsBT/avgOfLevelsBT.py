class Solution:
    @staticmethod
    def naive(root):
        levelMap = dict() # level as key, tuple of (add,size) as values
        def recur(tree,level):
            if tree==None:
                return
            add,size = levelMap.get(level,(0,0))
            levelMap[level]=(add+tree.val,size+1)
            recur(tree.left,level+1)
            recur(tree.right,level+1)
        recur(root,0)
        res = []
        for i in range(len(levelMap)):
            add,size=levelMap[i]
            res.append(round(add/size,5))
        return res
