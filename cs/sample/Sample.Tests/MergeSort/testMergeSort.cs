using System;
using Xunit;
using Sample.MergeSort;

namespace Sample.Tests{
    public class UnitTest_MergeSort{
        [Theory]
        [InlineData(new int[]{4,5,1,8,10,11,0,7,9},new int[]{0,1,4,5,7,8,9,10,11})]
        [InlineData(new int[]{4,2,3,1},new int[]{1,2,3,4})]
        public void checkResult(int[] nums,int[] expected){
            Assert.Equal(expected,mergeSort.naive(nums));
        }
    }
}
