from solns.treeNode.treeNode import *
class Solution:
    @staticmethod
    def naive(root,p,q):
        def search(tree,low,high):
            if tree.val>=low.val and tree.val<=high.val:
                return tree
            elif tree.val>high.val:
                return search(tree.left,low,high)
            elif tree.val<low.val:
                return search(tree.right,low,high)
        if p.val<q.val: 
            return search(root,p,q)
        elif p.val>q.val:
            return search(root,q,p)
            
