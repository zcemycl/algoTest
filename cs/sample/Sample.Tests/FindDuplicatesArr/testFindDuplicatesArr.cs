using System;
using Xunit;
using Sample.FindDuplicatesArr;

namespace Sample.Tests{
    public class UnitTest_FindDuplicatesArr{
        [Theory]
        [InlineData(new int[]{4,3,2,7,8,2,3,1},new int[]{3,2})]
        [InlineData(new int[]{},new int[]{})]
        [InlineData(new int[]{1,1,2},new int[]{1})]
        [InlineData(new int[]{1},new int[]{})]
        public void checkResult(int[] nums,int[] expected){
            Assert.Equal(expected,findDuplicatesArr.naive(nums));
        }
    }
}
