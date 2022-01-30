using System;
using Xunit;
using Sample.CamelcaseMatch;

namespace Sample.Tests{
    public class UnitTest_CamelcaseMatch{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,camelcaseMatch.naive(n));
        }
    }
}
