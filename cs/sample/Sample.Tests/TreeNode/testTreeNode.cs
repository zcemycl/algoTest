using System;
using Xunit;
using Sample.TreeNode;

namespace Sample.Tests{
    public class UnitTest_TreeNode{
        [Fact]
        public void TestTreeNode_empty(){
            treeNode node = new treeNode();
            Assert.Equal(0,node.val);
            Assert.Null(node.left);
            Assert.Null(node.right);
        }
        [Fact]
        public void TestTreeNode_123(){
            treeNode node = new treeNode(1);
            node.left = new treeNode(2);
            node.right = new treeNode(3);
            Assert.Equal(1,node.val);
            Assert.Equal(2,node.left.val);
            Assert.Equal(3,node.right.val);
        }
        [Fact]
        public void TestFromList_test1(){
            treeNode node = treeNode.treeNode_fromList2(
                new string[]{"1","2","3","4","5"});
            string[] s = treeNode.treeNode2List(node);
            Assert.Equal(new string[]{"1","2","3","4","5"},s);
        }
        [Fact]
        public void TestFromList_test2(){
            treeNode node = treeNode.treeNode_fromList2(
                new string[]{"5","4","8","11","None",
                "13","4","7","2","None","None","None","1"});
            string[] s = treeNode.treeNode2List(node);
            Assert.Equal(new string[]{"5","4","8","11","None",
                "13","4","7","2","None","None","None","1"},s);
        }
        
    }
}