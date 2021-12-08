using System;
using Xunit;
using Sample.CombinationSum;

namespace Sample.Tests{
    public class UnitTest_CombinationSum{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,combinationSum.naive(n));
        }
    }
}
