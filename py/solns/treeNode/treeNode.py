class TreeNode:
    def __init__(self,val=0,left=None,right=None):
        self.val = val
        self.left = left
        self.right = right

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
            