class Solution:
    @staticmethod
    def naive(root):
        res = []
        def recur(tree,acc):
            if tree==None:
                return
            if acc=="":
                acc+=str(tree.val)
            else:
                acc+="->"+str(tree.val)
            if tree.left==None and tree.right==None:
                res.append(acc)
                return 
            recur(tree.left,acc)
            recur(tree.right,acc)
        recur(root,"")
        return res
