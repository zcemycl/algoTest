using System;
using Xunit;
using Sample.ConstructBTFromPreorderInorder;

namespace Sample.Tests{
    public class UnitTest_ConstructBTFromPreorderInorder{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,constructBTFromPreorderInorder.naive(n));
        }
    }
}
