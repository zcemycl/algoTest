using System;
using Xunit;
using Sample.ConvertBinaryLinkedList2Int;
using Sample.ListNode;

namespace Sample.Tests{
    public class UnitTest_ConvertBinaryLinkedList2Int{
        [Theory]
        [InlineData("101",5)]
        [InlineData("0",0)]
        [InlineData("10",2)]
        [InlineData("100100111000000",18880)]
        public void checkResult(string s,int expected){
            listNode l = listNode.listNode_fromStr(s);
            Assert.Equal(expected,convertBinaryLinkedList2Int.naive(l));
        }
    }
}
