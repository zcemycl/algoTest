using System;
using Xunit;
using Sample.TenthLine;

namespace Sample.Tests{
    public class UnitTest_TenthLine{
        [Theory]
        [InlineData("Line 10")]
        public void checkResult(string expected){
            Assert.Equal(expected,tenthLine.naive());
            Assert.Equal(expected,tenthLine.linuxCMD());
        }
    }
}
