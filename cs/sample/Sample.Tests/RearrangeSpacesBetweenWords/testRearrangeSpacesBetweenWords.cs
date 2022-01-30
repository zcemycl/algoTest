using System;
using Xunit;
using Sample.RearrangeSpacesBetweenWords;

namespace Sample.Tests{
    public class UnitTest_RearrangeSpacesBetweenWords{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,rearrangeSpacesBetweenWords.naive(n));
        }
    }
}
