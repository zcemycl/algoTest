using System;
using Xunit;
using Sample.RemoveLinkedListElements;

namespace Sample.Tests{
    public class UnitTest_RemoveLinkedListElements{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,removeLinkedListElements.naive(n));
        }
    }
}
