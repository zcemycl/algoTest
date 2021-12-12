using System;
using Xunit;
using Sample.InsertInterval;

namespace Sample.Tests{
    public class UnitTest_InsertInterval{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,insertInterval.naive(n));
        }
    }
}
