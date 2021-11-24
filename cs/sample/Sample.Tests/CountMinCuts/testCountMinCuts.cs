using System;
using Xunit;
using Sample.CountMinCuts;

namespace Sample.Tests{
    public class UnitTest_CountMinCuts{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,countMinCuts.naive(n));
        }
    }
}
