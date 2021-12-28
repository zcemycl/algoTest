using System;
using Xunit;
using Sample.MiddleOfLinkedLs;

namespace Sample.Tests{
    public class UnitTest_MiddleOfLinkedLs{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,middleOfLinkedLs.naive(n));
        }
    }
}
