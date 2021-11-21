using System;
using Xunit;
using Sample.PathSum;
using Sample.TreeNode;

namespace Sample.Tests{
    public class UnitTest_PathSum{
        [Theory]
        [InlineData(new string[]{"5","4","8","11","None",
            "13","4","7","2","None","None","None","1"},22,true)]
        [InlineData(new string[]{"1","2","3"},5,false)]
        [InlineData(new string[]{"1","2"},0,false)]
        public void checkResult(string[] nums,int targetSum,bool expected){
            treeNode root = treeNode.treeNode_fromList2(nums);
            Assert.Equal(expected,pathSum.naive(root,targetSum));
        }
    }
}
