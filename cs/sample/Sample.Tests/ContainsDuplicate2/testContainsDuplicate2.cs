using System;
using Xunit;
using Sample.ContainsDuplicate2;

namespace Sample.Tests{
    public class UnitTest_ContainsDuplicate2{
        [Theory]
        [InlineData(new int[]{1,2,3,1},3,true)]
        [InlineData(new int[]{1,0,1,1},1,true)]
        [InlineData(new int[]{1,2,3,1,2,3},2,false)]
        public void checkResult(int[] nums,int k,bool expected){
            Assert.Equal(expected,containsDuplicate2.naive(nums,k));
        }
    }
}
