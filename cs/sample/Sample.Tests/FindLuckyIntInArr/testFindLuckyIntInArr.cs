using System;
using Xunit;
using Sample.FindLuckyIntInArr;

namespace Sample.Tests{
    public class UnitTest_FindLuckyIntInArr{
        [Theory]
        [InlineData(new int[]{5},-1)]
        [InlineData(new int[]{7,7,7,7,7,7,7},7)]
        [InlineData(new int[]{2,2,2,3,3},-1)]
        [InlineData(new int[]{1,2,2,3,3,3},3)]
        [InlineData(new int[]{2,2,3,4},2)]
        [InlineData(new int[]{4,2,2,4,3,4,4},4)]
        public void checkResult(int[] arr,int expected){
            Assert.Equal(expected,findLuckyIntInArr.naive(arr));
        }
    }
}
