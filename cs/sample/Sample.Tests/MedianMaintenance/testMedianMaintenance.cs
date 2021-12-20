using System;
using Xunit;
using Sample.MedianMaintenance;

namespace Sample.Tests{
    public class UnitTest_MedianMaintenance{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,medianMaintenance.naive(n));
        }
    }
}
