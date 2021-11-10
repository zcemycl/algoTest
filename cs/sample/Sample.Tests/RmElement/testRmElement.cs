using System;
using Xunit;
using Sample.RmElement;

namespace Sample.Tests{
    public class UnitTest_RmElement{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,rmElement.naive(n));
        }
    }
}
