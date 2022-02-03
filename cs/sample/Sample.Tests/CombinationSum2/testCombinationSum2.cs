using System;
using Xunit;
using Sample.CombinationSum2;

namespace Sample.Tests{
    public class UnitTest_CombinationSum2{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,combinationSum2.naive(n));
        }
    }
}
