using System;
using Xunit;
using Sample.MissingNum;

namespace Sample.Tests{
    public class UnitTest_MissingNum{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,missingNum.naive(n));
        }
    }
}
