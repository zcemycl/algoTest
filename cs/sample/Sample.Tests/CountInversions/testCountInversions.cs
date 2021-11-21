using System;
using Xunit;
using Sample.CountInversions;

namespace Sample.Tests{
    public class UnitTest_CountInversions{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,countInversions.naive(n));
        }
    }
}
