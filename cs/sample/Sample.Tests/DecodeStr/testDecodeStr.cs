using System;
using Xunit;
using Sample.DecodeStr;

namespace Sample.Tests{
    public class UnitTest_DecodeStr{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,decodeStr.naive(n));
        }
    }
}
