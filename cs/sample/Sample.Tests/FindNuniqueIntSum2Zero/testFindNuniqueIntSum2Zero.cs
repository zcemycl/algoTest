using System;
using Xunit;
using Sample.FindNuniqueIntSum2Zero;

namespace Sample.Tests{
    public class UnitTest_FindNuniqueIntSum2Zero{
        [Theory]
        [InlineData(1,new int[]{0})]
        [InlineData(3,new int[]{0,1,-1})]
        [InlineData(5,new int[]{0,1,-1,2,-2})]
        public void checkResult(int n,int[] expected){
            Assert.Equal(expected,findNuniqueIntSum2Zero.naive(n));
        }
    }
}
