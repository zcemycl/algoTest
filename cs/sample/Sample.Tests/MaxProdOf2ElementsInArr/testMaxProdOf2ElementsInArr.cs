using System;
using Xunit;
using Sample.MaxProdOf2ElementsInArr;
using System.Linq;

namespace Sample.Tests{
    public class UnitTest_MaxProdOf2ElementsInArr{
        [Theory]
        [InlineData(new int[]{3,4,5,2},12)]
        [InlineData(new int[]{1,5,4,5},16)]
        [InlineData(new int[]{3,7},12)]
        [InlineData(new int[]{6,6,2,7},30)]
        public void checkResult(int[] nums,int expected){
            Assert.Equal(expected,maxProdOf2ElementsInArr.naive(nums));
        }
    }
}
