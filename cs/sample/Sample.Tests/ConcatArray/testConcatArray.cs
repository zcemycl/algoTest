using System;
using Xunit;
using Sample.ConcatArray;

namespace Sample.Tests{
    public class UnitTest_ConcatArray{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,concatArray.naive(n));
        }
    }
}
