using System;
using Xunit;
using Sample.SortIntByNum1Bits;

namespace Sample.Tests{
    public class UnitTest_SortIntByNum1Bits{
        [Theory]
        [InlineData(new int[]{4,2,1},new int[]{1,2,4})]
        // [InlineData(new int[]{1,2,3,4,5,6,7,8},new int[]{1,2,4,8,3,5,6,7})]
        public void checkResult(int[] arr,int[] expected){
            Assert.Equal(expected,sortIntByNum1Bits.naive(arr));
        }
    }
}
