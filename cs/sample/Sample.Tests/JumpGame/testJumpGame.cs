using System;
using Xunit;
using Sample.JumpGame;

namespace Sample.Tests{
    public class UnitTest_JumpGame{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,jumpGame.naive(n));
        }
    }
}
