using System;
using Xunit;
using Sample.RmElement;

namespace Sample.Tests{
    public class UnitTest_RmElement{
        [Theory]
        [InlineData(new int[]{3,2,2,3},3,2)]
        [InlineData(new int[]{},3,0)]
        [InlineData(new int[]{1,2},3,2)]
        [InlineData(new int[]{0,1,2,2,3,0,4,2},2,5)]
        public void checkResult(int[] nums,int val,int expected){
            Assert.Equal(expected,rmElement.naive(nums,val));
        }
    }
}
