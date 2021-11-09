using System; 
using Xunit;
using Sample.RemoveDuplicatesFromSortedArr;

namespace Sample.Tests{
    public class UnitTest_RemoveDuplicatesFromSortedArr{
        [Theory]
        [InlineData(new int[]{1,1,2},2)]
        [InlineData(new int[]{},0)]
        [InlineData(new int[]{1},1)]
        [InlineData(new int[]{1,2},2)]
        [InlineData(new int[]{0,0,0,1,1,1,1,2,2,2},3)]
        public void checkResult(int[] nums,int expected){
            Assert.Equal(expected,
                removeDuplicatesFromSortedArr.naive(nums));
        }
    }
}