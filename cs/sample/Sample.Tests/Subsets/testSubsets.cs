using System;
using Xunit;
using Sample.Subsets;

namespace Sample.Tests{
    public class UnitTest_Subsets{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,subsets.naive(n));
        }
    }
}
