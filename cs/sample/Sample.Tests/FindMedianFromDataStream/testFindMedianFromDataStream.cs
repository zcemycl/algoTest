using System;
using Xunit;
using Sample.FindMedianFromDataStream;

namespace Sample.Tests{
    public class UnitTest_FindMedianFromDataStream{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,findMedianFromDataStream.naive(n));
        }
    }
}
