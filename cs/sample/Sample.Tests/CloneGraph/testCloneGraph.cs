using System;
using Xunit;
using Sample.CloneGraph;

namespace Sample.Tests{
    public class UnitTest_CloneGraph{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,cloneGraph.naive(n));
        }
    }
}
