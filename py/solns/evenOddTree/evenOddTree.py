class Solution:
    @staticmethod
    def naive(root):
        hashLevel = {} # min:0, max: float('inf')
        def recur(tree,level):
            if tree==None:
                return True
            isOdd = level%2
            cur=(tree.val<hashLevel.get(level,float('inf'))) if isOdd else \
                    (tree.val>hashLevel.get(level,0))
            hashLevel[level]=tree.val
            l = recur(tree.left,level+1)
            r = recur(tree.right,level+1)
            return l and r and cur and tree.val%2!=isOdd                
        return recur(root,0)
