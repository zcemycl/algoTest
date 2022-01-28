using System;
using Xunit;
using Sample.ReconstructDigitsFromEng;

namespace Sample.Tests{
    public class UnitTest_ReconstructDigitsFromEng{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,reconstructDigitsFromEng.naive(n));
        }
    }
}
