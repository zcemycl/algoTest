using System;
using Xunit;
using Sample.UniquePaths;

namespace Sample.Tests{
    public class UnitTest_UniquePaths{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,uniquePaths.naive(n));
        }
    }
}
