using System;
using Xunit;
using Sample.UniquePaths2;

namespace Sample.Tests{
    public class UnitTest_UniquePaths2{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,uniquePaths2.naive(n));
        }
    }
}
