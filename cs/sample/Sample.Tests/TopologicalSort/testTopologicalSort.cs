using System;
using Xunit;
using Sample.TopologicalSort;

namespace Sample.Tests{
    public class UnitTest_TopologicalSort{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,topologicalSort.naive(n));
        }
    }
}
