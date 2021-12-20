using System;
using Xunit;
using Sample.Xyt;

namespace Sample.Tests{
    public class UnitTest_Xyt{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,xyt.naive(n));
        }
    }
}
