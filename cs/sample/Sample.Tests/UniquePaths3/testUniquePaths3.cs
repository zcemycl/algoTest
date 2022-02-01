using System;
using Xunit;
using Sample.UniquePaths3;

namespace Sample.Tests{
    public class UnitTest_UniquePaths3{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,uniquePaths3.naive(n));
        }
    }
}
