using System;
using Xunit;
using Sample.BfsConnectivity;

namespace Sample.Tests{
    public class UnitTest_BfsConnectivity{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,bfsConnectivity.naive(n));
        }
    }
}
