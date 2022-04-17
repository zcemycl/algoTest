using System;
using Xunit;
using Sample.MinWindowSubstr;

namespace Sample.Tests{
    public class UnitTest_MinWindowSubstr{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,minWindowSubstr.naive(n));
        }
    }
}
