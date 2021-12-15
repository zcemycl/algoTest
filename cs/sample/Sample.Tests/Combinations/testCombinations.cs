using System;
using Xunit;
using Sample.Combinations;

namespace Sample.Tests{
    public class UnitTest_Combinations{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,combinations.naive(n));
        }
    }
}
