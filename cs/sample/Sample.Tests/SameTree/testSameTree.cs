using System;
using Xunit;
using Sample.SameTree;
using Sample.TreeNode;

namespace Sample.Tests{
    public class UnitTest_SameTree{
        [Theory]
        [InlineData(new string[]{"1","2","3"},new string[]{"1","2","3"},true)]
        [InlineData(new string[]{"1","2"},new string[]{"1","None","2"},false)]
        [InlineData(new string[]{"1","2","1"},new string[]{"1","1","2"},false)]
        public void checkResult(string[] nums1,string[] nums2,bool expected){
            treeNode p = treeNode.treeNode_fromList2(nums1);
            treeNode q = treeNode.treeNode_fromList2(nums2);
            Assert.Equal(expected,sameTree.naive(p,q));
        }
    }
}
