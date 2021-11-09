using System; 
using Xunit;
using Sample.Sqrtx;

namespace Sample.Tests{
    public class UnitTest_Sqrtx{
        [Theory]
        [InlineData(9,3)]
        [InlineData(0,0)]
        [InlineData(1,1)]
        [InlineData(2,1)]
        [InlineData(26,5)]
        [InlineData(16,4)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,sqrtx.binary(n));
        }
    }
}