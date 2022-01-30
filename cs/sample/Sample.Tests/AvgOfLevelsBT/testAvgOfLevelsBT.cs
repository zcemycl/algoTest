using System;
using Xunit;
using Sample.AvgOfLevelsBT;

namespace Sample.Tests{
    public class UnitTest_AvgOfLevelsBT{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,avgOfLevelsBT.naive(n));
        }
    }
}
