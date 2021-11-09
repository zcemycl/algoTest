using System; 
using Xunit;
using Sample.PlusOne;

namespace Sample.Tests{
    public class UnitTest_PlusOne{
        [Theory]
        [InlineData(new int[]{1,2,3},new int[]{1,2,4})]
        [InlineData(new int[]{4,3,2,1},new int[]{4,3,2,2})]
        [InlineData(new int[]{0},new int[]{1})]
        [InlineData(new int[]{9},new int[]{1,0})]
        public void checkResult(int[] inp,int[] expected){
            Assert.Equal(expected,plusOne.naive(inp));
        }
    }
}