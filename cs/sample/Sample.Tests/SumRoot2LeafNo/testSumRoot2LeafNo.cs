using System;
using Xunit;
using Sample.SumRoot2LeafNo;

namespace Sample.Tests{
    public class UnitTest_SumRoot2LeafNo{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,sumRoot2LeafNo.naive(n));
        }
    }
}
