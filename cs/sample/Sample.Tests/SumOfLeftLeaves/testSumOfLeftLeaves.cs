using System;
using Xunit;
using Sample.SumOfLeftLeaves;
using Sample.TreeNode;

namespace Sample.Tests{
    public class UnitTest_SumOfLeftLeaves{
        [Theory]
        [InlineData(new string[]{"3","9","20","None","None","15","7"},24)]
        [InlineData(new string[]{"1"},0)]
        public void checkResult(string[] nums,int expected){
            treeNode root = treeNode.treeNode_fromList2(nums);
            Assert.Equal(expected,sumOfLeftLeaves.naive(root));
        }
    }
}
