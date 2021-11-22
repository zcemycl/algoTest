using System;
using Xunit;
using Sample.BubbleSort;

namespace Sample.Tests{
    public class UnitTest_BubbleSort{
        [Theory]
        [InlineData(new int[]{4,5,1,8,10,11,0,7,9},
            new int[]{0,1,4,5,7,8,9,10,11})]
        public void checkResult(int[] nums,int[] expected){
            Assert.Equal(expected,bubbleSort.naive(nums));
        }
    }
}
