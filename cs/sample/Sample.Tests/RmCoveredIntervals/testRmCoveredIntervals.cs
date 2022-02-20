using System;
using Xunit;
using Sample.RmCoveredIntervals;

namespace Sample.Tests{
    public class UnitTest_RmCoveredIntervals{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,rmCoveredIntervals.naive(n));
        }
    }
}
