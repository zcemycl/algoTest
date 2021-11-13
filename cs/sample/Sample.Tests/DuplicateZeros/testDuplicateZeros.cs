using System;
using Xunit;
using Sample.DuplicateZeros;

namespace Sample.Tests{
    public class UnitTest_DuplicateZeros{
        [Theory]
        [InlineData(new int[]{1,0,2,3,0,4,5,0},new int[]{1,0,0,2,3,0,0,4})]
        [InlineData(new int[]{1,2,3},new int[]{1,2,3})]
        [InlineData(new int[]{},new int[]{})]
        [InlineData(new int[]{1,0,0,2,3,0,4,5,0},new int[]{1,0,0,0,0,2,3,0,0})]
        public void checkResult(int[] arr,int[] expected){
            duplicateZeros.naive(arr);
            Assert.Equal(expected,arr);
        }
    }
}
