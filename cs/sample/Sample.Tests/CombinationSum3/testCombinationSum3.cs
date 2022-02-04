using System;
using Xunit;
using Sample.CombinationSum3;

namespace Sample.Tests{
    public class UnitTest_CombinationSum3{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,combinationSum3.naive(n));
        }
    }
}
