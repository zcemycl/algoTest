using System;
using Xunit;
using Sample.KClosestPts2Origin;

namespace Sample.Tests{
    public class UnitTest_KClosestPts2Origin{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,kClosestPts2Origin.naive(n));
        }
    }
}
