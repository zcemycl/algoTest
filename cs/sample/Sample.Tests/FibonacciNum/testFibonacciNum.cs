using System;
using Xunit;
using Sample.FibonacciNum;

namespace Sample.Tests{
    public class UnitTest_FibonacciNum{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,fibonacciNum.naive(n));
        }
    }
}
