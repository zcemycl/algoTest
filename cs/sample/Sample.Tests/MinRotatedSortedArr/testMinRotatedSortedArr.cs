using System;
using Xunit;
using Sample.MinRotatedSortedArr;

namespace Sample.Tests{
    public class UnitTest_MinRotatedSortedArr{
        [Theory]
        [InlineData(new int[]{3,4,5,1,2},1)]
        [InlineData(new int[]{4,5,6,7,0,1,2},0)]
        [InlineData(new int[]{11,13,15,17},11)]
        public void checkResult(int[] n,int expected){
            Assert.Equal(expected,minRotatedSortedArr.naive(n));
        }
    }
}
