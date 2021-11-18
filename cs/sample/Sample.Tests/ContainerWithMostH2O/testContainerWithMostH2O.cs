using System;
using Xunit;
using Sample.ContainerWithMostH2O;

namespace Sample.Tests{
    public class UnitTest_ContainerWithMostH2O{
        [Theory]
        [InlineData(new int[]{1,8,6,2,5,4,8,3,7},49)]
        [InlineData(new int[]{1,1},1)]
        [InlineData(new int[]{1,2,1},2)]
        [InlineData(new int[]{1,4,1,1,1,3},12)]
        [InlineData(new int[]{2,3,4,5,18,17,6},17)]
        public void checkResult(int[] height,int expected){
            Assert.Equal(expected,containerWithMostH2O.naive(height));
        }
    }
}
