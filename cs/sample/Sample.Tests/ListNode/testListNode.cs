using System;
using Xunit;
using Sample.ListNode;

namespace Sample.Tests{
    public class UnitTest_ListNode{
        [Fact]
        public void TestListNode_empty(){
            listNode node = new listNode();
            Assert.Equal(0,node.val);
            Assert.Null(node.next);
        }
        [Fact]
        public void TestListNode_123(){
            int[] arr = {1,2,3};
            listNode prev = null;
            listNode result = new listNode(0);
            for (int i=0;i<arr.Length;i++){
                result = new listNode(arr[i],prev);
                prev = result;
            }
            Assert.Equal(3,result.val);
            Assert.Equal(2,result.next.val);
            Assert.Equal(1,result.next.next.val);
        }
    }
}