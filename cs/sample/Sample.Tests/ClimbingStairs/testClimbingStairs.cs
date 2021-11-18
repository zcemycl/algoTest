using System;
using Xunit;
using Sample.ClimbingStairs;

namespace Sample.Tests{
    public class UnitTest_ClimbingStairs{
        [Theory]
        [InlineData(2,2)]
        [InlineData(3,3)]
        [InlineData(4,5)]
        [InlineData(5,8)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,climbingStairs.naive(n));
            Assert.Equal(expected,climbingStairs.dp(n));
            Assert.Equal(expected,climbingStairs.formula(n));
        }
    }
}
