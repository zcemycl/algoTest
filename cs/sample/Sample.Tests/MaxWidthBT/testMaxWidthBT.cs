using System;
using Xunit;
using Sample.MaxWidthBT;

namespace Sample.Tests{
    public class UnitTest_MaxWidthBT{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,maxWidthBT.naive(n));
        }
    }
}
