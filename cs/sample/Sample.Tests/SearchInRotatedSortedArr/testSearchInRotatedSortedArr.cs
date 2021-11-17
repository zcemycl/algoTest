using System;
using Xunit;
using Sample.SearchInRotatedSortedArr;

namespace Sample.Tests{
    public class UnitTest_SearchInRotatedSortedArr{
        [Theory]
        [InlineData(new int[]{4,5,6,7,0,1,2},0,4)]
        [InlineData(new int[]{4,5,6,7,0,1,2},3,-1)]
        [InlineData(new int[]{1},0,-1)]
        public void checkResult(int[] nums,int target,int expected){
            Assert.Equal(expected,searchInRotatedSortedArr.naive(nums,target));
        }
    }
}
