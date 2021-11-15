using System;
using Xunit;
using Sample.LinkedListCycle2;

namespace Sample.Tests{
    public class UnitTest_LinkedListCycle2{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,linkedListCycle2.naive(n));
        }
    }
}
