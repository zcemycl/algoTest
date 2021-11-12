using System;
using Xunit;
using Sample.BinarySearch;

namespace Sample.Tests{
    public class UnitTest_BinarySearch{
        [Theory]
        [InlineData(new int[] {-1,0,3,5,9,12},9,4)]
        [InlineData(new int[] {-1,0,3,5,9,12},2,-1)]
        public void checkResult(int[] nums,int target,int expected){
            Assert.Equal(expected,binarySearch.naive(nums,target));
        }
    }
}
