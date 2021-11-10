from solns.treeNode.treeNode import *

class Solution:
    @staticmethod
    def recursive(p,q):
        if not p or not q:
            return p==q
        if p.val!=q.val:
            return False
        return Solution.recursive(p.left,q.left) and \
            Solution.recursive(p.right,q.right)

    @staticmethod
    def treeNode_fromList(nums,root,i,n):
        if i<n:
            tmp = TreeNode(nums[i])
            root = tmp
            root.left = Solution.treeNode_fromList(nums,
                root.left,2*i+1,n)
            root.right = Solution.treeNode_fromList(nums,
                root.right,2*i+2,n)
        return root

    @staticmethod
    def treeNode_fromList2(nums):
        q = []
        result = TreeNode(nums[0])
        tmp = result
        q.append(tmp)
        for i in range(1,len(nums)):
            if i%2==1:
                tmp = q.pop(0)
                tmp.left = TreeNode(val=nums[i])
                q.append(tmp.left)
            elif i%2==0:
                tmp.right = TreeNode(val=nums[i])
                q.append(tmp.right)
        return result
    

    @staticmethod
    def treeNode2List(node):
        q=[node]
        ls = []
        while (len(q)!=0):
            tmp = q.pop(0)
            ls.append(tmp.val)
            if tmp.left:
                q.append(tmp.left)
            if tmp.right:
                q.append(tmp.right)
        return ls
            

if __name__ == "__main__":
    nums = [1,2,3,4,6,7]
    # t = Solution.treeNode_fromList(nums,None,0,len(nums))
    t = Solution.treeNode_fromList2(nums)
    ls = Solution.treeNode2List(t)
    print(ls)