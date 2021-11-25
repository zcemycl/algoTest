using System;
using Xunit;
using Sample.Graph;

namespace Sample.Tests{
    public class UnitTest_Graph{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,graph.naive(n));
        }
    }
}
