using System;
using Xunit;
using Sample.Permutations;

namespace Sample.Tests{
    public class UnitTest_Permutations{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,permutations.naive(n));
        }
    }
}
