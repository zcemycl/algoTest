using System;
using Xunit;
using Sample.CombinationSum4;

namespace Sample.Tests{
    public class UnitTest_CombinationSum4{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,combinationSum4.naive(n));
        }
    }
}
