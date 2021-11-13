using System;
using Xunit;
using Sample.ContainsDuplicate;

namespace Sample.Tests{
    public class UnitTest_ContainsDuplicate{
        [Theory]
        [InlineData(new int[]{1,2,3,1},true)]
        [InlineData(new int[]{1,1,1,3,3,4,3,2,4,2},true)]
        [InlineData(new int[]{1,2,3,4},false)]
        [InlineData(new int[]{},false)]
        public void checkResult(int[] nums,bool expected){
            Assert.Equal(expected,containsDuplicate.naive(nums));
        }
    }
}
