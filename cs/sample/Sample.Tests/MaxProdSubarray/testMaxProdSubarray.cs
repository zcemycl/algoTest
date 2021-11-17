using System;
using Xunit;
using Sample.MaxProdSubarray;

namespace Sample.Tests{
    public class UnitTest_MaxProdSubarray{
        [Theory]
        [InlineData(new int[]{2,3,-2,4},6)]
        [InlineData(new int[]{-2,0,-1},0)]
        public void checkResult(int[] nums,int expected){
            Assert.Equal(expected,maxProdSubarray.naive(nums));
        }
    }
}
