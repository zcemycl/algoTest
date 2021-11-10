using System;
using Xunit;
using Sample.RmDuplicatesFromUnsortedLinkedList;

namespace Sample.Tests{
    public class UnitTest_RmDuplicatesFromUnsortedLinkedList{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,rmDuplicatesFromUnsortedLinkedList.naive(n));
        }
    }
}
