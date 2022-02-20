class Solution:
    @staticmethod
    def naive(root):
        if root==None: return []
        minLevel,maxLevel = 100,-100
        levels = dict()
        queue = [(root,0)]
        while len(queue)!=0:
            tree,level = queue.pop(0)
            minLevel = min(minLevel,level)
            maxLevel = max(maxLevel,level)
            left = tree.left
            right = tree.right
            elements = levels.get(level,[])
            elements.append(tree.val)
            levels[level]=elements
            if left:
                queue.append((left,level-1))
            if right:
                queue.append((right,level+1))
        res = []
        for i in range(minLevel,maxLevel+1):
            if i not in levels:
                continue
            res.append(levels[i])
        return res
