using System;
using Xunit;
using Sample.Permutations2;

namespace Sample.Tests{
    public class UnitTest_Permutations2{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,permutations2.naive(n));
        }
    }
}
