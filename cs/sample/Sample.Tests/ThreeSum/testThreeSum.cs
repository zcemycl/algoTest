using System;
using Xunit;
using Sample.ThreeSum;

namespace Sample.Tests{
    public class UnitTest_ThreeSum{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,threeSum.naive(n));
        }
    }
}
