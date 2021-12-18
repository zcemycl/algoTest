using System;
using Xunit;
using Sample.SumOfTwoInts;

namespace Sample.Tests{
    public class UnitTest_SumOfTwoInts{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,sumOfTwoInts.naive(n));
        }
    }
}
