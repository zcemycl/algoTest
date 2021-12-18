using System;
using Xunit;
using Sample.ReversedLinkedList;

namespace Sample.Tests{
    public class UnitTest_ReversedLinkedList{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,reversedLinkedList.naive(n));
        }
    }
}
