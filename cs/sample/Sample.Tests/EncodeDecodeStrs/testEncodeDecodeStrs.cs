using System;
using Xunit;
using Sample.EncodeDecodeStrs;

namespace Sample.Tests{
    public class UnitTest_EncodeDecodeStrs{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,encodeDecodeStrs.naive(n));
        }
    }
}
