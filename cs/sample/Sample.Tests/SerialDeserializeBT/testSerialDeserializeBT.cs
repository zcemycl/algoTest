using System;
using Xunit;
using Sample.SerialDeserializeBT;

namespace Sample.Tests{
    public class UnitTest_SerialDeserializeBT{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,serialDeserializeBT.naive(n));
        }
    }
}
