using System;
using Xunit;
using Sample.Add2IntArr;

namespace Sample.Tests{
    public class UnitTest_Add2IntArr{
        [Theory]
        [InlineData(new int[]{1,2,0,0},34,new int[]{1,2,3,4})]
        [InlineData(new int[]{2,7,4},181,new int[]{4,5,5})]
        [InlineData(new int[]{0},34,new int[]{3,4})]
        [InlineData(new int[]{2,1,5},806,new int[]{1,0,2,1})]
        [InlineData(new int[]{9,9,9,9},1,new int[]{1,0,0,0,0})]
        public void checkResult(int[] num,int k,int[] expected){
            Assert.Equal(expected,add2IntArr.naive(num,k));
        }
    }
}
