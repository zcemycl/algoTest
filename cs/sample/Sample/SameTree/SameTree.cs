using System;
using System.Collections.Generic;
using Sample.TreeNode;

namespace Sample.SameTree{
    public class sameTree{
        public static bool naive(treeNode p,treeNode q){
            if (p==null&&q==null) return true;
            if (p==null||q==null) return false;
            if (p.val!=q.val) return false;
            return sameTree.naive(p.left,q.left)&&sameTree.naive(p.right,q.right);
        }
    }
}
