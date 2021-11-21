using System;
using System.Collections.Generic;
using Sample.TreeNode;

namespace Sample.SumOfLeftLeaves{
    public class sumOfLeftLeaves{
        public static int naive(treeNode root){
            int s=0;
            if (root != null){
                if (root.left!=null&&root.left.left==null&&root.left.right==null)
                    s+=root.left.val;
                if (root.left!=null&&(root.left.left!=null||root.left.right!=null))
                    s+=sumOfLeftLeaves.naive(root.left);
                if (root.right!=null&&(root.right.left!=null||root.right.right!=null))
                    s+=sumOfLeftLeaves.naive(root.right); 
            }
            return s;
        }
    }
}
