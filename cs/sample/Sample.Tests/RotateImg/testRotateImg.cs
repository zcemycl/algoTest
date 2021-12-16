using System;
using Xunit;
using Sample.RotateImg;

namespace Sample.Tests{
    public class UnitTest_RotateImg{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,rotateImg.naive(n));
        }
    }
}
