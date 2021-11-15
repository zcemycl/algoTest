using System;
using Xunit;
using Sample.LinkedListCycle;

namespace Sample.Tests{
    public class UnitTest_LinkedListCycle{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,linkedListCycle.naive(n));
        }
    }
}
