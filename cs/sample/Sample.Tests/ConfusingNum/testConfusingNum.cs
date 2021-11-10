using System;
using Xunit;
using Sample.ConfusingNum;

namespace Sample.Tests{
    public class UnitTest_ConfusingNum{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,confusingNum.naive(n));
        }
    }
}
