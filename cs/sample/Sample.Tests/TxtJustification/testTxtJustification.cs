using System;
using Xunit;
using Sample.TxtJustification;

namespace Sample.Tests{
    public class UnitTest_TxtJustification{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,txtJustification.naive(n));
        }
    }
}
