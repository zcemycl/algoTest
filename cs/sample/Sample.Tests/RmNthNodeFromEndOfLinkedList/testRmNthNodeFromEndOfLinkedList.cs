using System;
using Xunit;
using Sample.RmNthNodeFromEndOfLinkedList;

namespace Sample.Tests{
    public class UnitTest_RmNthNodeFromEndOfLinkedList{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,rmNthNodeFromEndOfLinkedList.naive(n));
        }
    }
}
