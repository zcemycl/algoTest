using System;
using Xunit;
using Sample.BTPaths;

namespace Sample.Tests{
    public class UnitTest_BTPaths{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,bTPaths.naive(n));
        }
    }
}
