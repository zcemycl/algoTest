using System;
using Xunit;
using Sample.ListNode;
using Sample.AddTwoNumbers;

namespace Sample.Tests{
    public class UnitTest_AddTwoNumbers{
        [Fact]
        public void TestNaive_475_25(){
            listNode l1 = listNode.listNode_fromStrReverse("475");
            listNode l2 = listNode.listNode_fromStrReverse("25");
            listNode l3 = addTwoNumbers.naive(l1,l2);
            string n3 = listNode.printListNode(l3,"reverse");
            Assert.Equal("500",n3);
        }
        [Fact]
        public void TestNaive_9_9(){
            listNode l1 = listNode.listNode_fromStrReverse("9");
            listNode l2 = listNode.listNode_fromStrReverse("9");
            listNode l3 = addTwoNumbers.naive(l1,l2);
            string n3 = listNode.printListNode(l3,"reverse");
            Assert.Equal("18",n3);
        }
        [Fact]
        public void TestNaive_20000_20(){
            listNode l1 = listNode.listNode_fromStrReverse("20000");
            listNode l2 = listNode.listNode_fromStrReverse("20");
            listNode l3 = addTwoNumbers.naive(l1,l2);
            string n3 = listNode.printListNode(l3,"reverse");
            Assert.Equal("20020",n3);
        }
    }
}