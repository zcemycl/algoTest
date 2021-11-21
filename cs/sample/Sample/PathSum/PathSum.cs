using System;
using System.Collections.Generic;
using Sample.TreeNode;

namespace Sample.PathSum{
    public class pathSum{
        public static bool naive(treeNode root,int targetSum){
            if (root == null) return false;
            if (root.left == null && root.right == null)
                return root.val == targetSum;
            bool result = false;
            if (root.left != null && pathSum.naive(root.left,targetSum-root.val))
                result = true;
            if (root.left != null && pathSum.naive(root.right,targetSum-root.val))
                result = true;
            return result;
        }
    }
}
