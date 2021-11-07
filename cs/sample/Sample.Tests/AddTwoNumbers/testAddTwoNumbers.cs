using System;
using Xunit;
using Sample.ListNode;
using Sample.AddTwoNumbers;

namespace Sample.Tests{
    public class UnitTest_AddTwoNumbers{
        [Fact]
        public void Testprintfrom(){
            string text = "475";
            listNode node = addTwoNumbers.listNode_fromStr(text);
            string result = addTwoNumbers.printListNode(node);
            Console.WriteLine(result);
            Console.WriteLine(node.val);
            Assert.Equal(text,result);
        }
        [Fact]
        public void TestNaive_475_25(){
            string n1 = "475";
            string n2 = "25";
            string ans = "500";
            listNode l1 = addTwoNumbers.listNode_fromStr(n1);
            listNode l2 = addTwoNumbers.listNode_fromStr(n2);
            listNode l3 = addTwoNumbers.naive(l1,l2);
            string n3 = addTwoNumbers.printListNode(l3);
            Console.WriteLine(n3);
            Assert.Equal(ans,n3);
        }
        [Fact]
        public void TestNaive_9_9(){
            string n1 = "9";
            string n2 = "9";
            string ans = "18";
            listNode l1 = addTwoNumbers.listNode_fromStr(n1);
            listNode l2 = addTwoNumbers.listNode_fromStr(n2);
            listNode l3 = addTwoNumbers.naive(l1,l2);
            string n3 = addTwoNumbers.printListNode(l3);
            Console.WriteLine(n3);
            Assert.Equal(ans,n3);
        }
        [Fact]
        public void TestNaive_20000_20(){
            string n1 = "20000";
            string n2 = "20";
            string ans = "20020";
            listNode l1 = addTwoNumbers.listNode_fromStr(n1);
            listNode l2 = addTwoNumbers.listNode_fromStr(n2);
            listNode l3 = addTwoNumbers.naive(l1,l2);
            string n3 = addTwoNumbers.printListNode(l3);
            Console.WriteLine(n3);
            Assert.Equal(ans,n3);
        }
    }
}