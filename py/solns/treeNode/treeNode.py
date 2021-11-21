class TreeNode:
    def __init__(self,val=0,left=None,right=None):
        self.val = val
        self.left = left
        self.right = right

    @staticmethod
    def treeNode_fromList2(nums):
        if len(nums)==0: return None
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
            print(tmp.val)
            ls.append(tmp.val)
            if tmp.left:
                print('left: ',tmp.left,tmp.left.val)
                q.append(tmp.left)
            if tmp.right:
                print('right: ',tmp.right,tmp.right.val)
                q.append(tmp.right)
        return ls

if __name__ == "__main__":
    a = TreeNode.treeNode_fromList([1,2,3,4,5],TreeNode(),0,5)
    b = TreeNode.treeNode_fromList([5,4,8,11,None,13,4,7,2,None,None,None,1],
        TreeNode(),0,9)
    c = TreeNode.treeNode_fromList2(
        [5,4,8,11,None,13,4,7,2,None,None,None,1])