using System;
using Xunit;
using Sample.KaratsubaMultiply;

namespace Sample.Tests{
    public class UnitTest_KaratsubaMultiply{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,karatsubaMultiply.naive(n));
        }
    }
}
