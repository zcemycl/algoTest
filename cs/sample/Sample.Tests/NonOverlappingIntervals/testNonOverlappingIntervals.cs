using System;
using Xunit;
using Sample.NonOverlappingIntervals;

namespace Sample.Tests{
    public class UnitTest_NonOverlappingIntervals{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,nonOverlappingIntervals.naive(n));
        }
    }
}
