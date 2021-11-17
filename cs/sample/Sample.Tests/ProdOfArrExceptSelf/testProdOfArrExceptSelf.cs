using System;
using Xunit;
using Sample.ProdOfArrExceptSelf;

namespace Sample.Tests{
    public class UnitTest_ProdOfArrExceptSelf{
        [Theory]
        [InlineData(new int[]{1,2,3,4},new int[]{24,12,8,6})]
        [InlineData(new int[]{-1,1,0,-3,3},new int[]{0,0,9,0,0})]
        public void checkResult(int[] nums,int[] expected){
            Assert.Equal(expected,prodOfArrExceptSelf.naive(nums));
        }
    }
}
