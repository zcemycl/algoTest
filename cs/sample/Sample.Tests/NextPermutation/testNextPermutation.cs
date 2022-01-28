using System;
using Xunit;
using Sample.NextPermutation;

namespace Sample.Tests{
    public class UnitTest_NextPermutation{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,nextPermutation.naive(n));
        }
    }
}
