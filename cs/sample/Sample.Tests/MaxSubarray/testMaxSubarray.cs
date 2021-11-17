using System;
using Xunit;
using Sample.MaxSubarray;

namespace Sample.Tests{
    public class UnitTest_MaxSubarray{
        [Theory]
        [InlineData(new int[]{-2,1,-3,4,-1,2,1,-5,4},6)]
        [InlineData(new int[]{5,4,-1,7,8},23)]
        public void checkResult(int[] nums,int expected){
            Assert.Equal(expected,maxSubarray.naive(nums));
        }
    }
}
