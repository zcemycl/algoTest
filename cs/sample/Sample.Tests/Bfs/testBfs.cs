using System;
using Xunit;
using Sample.Bfs;

namespace Sample.Tests{
    public class UnitTest_Bfs{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,bfs.naive(n));
        }
    }
}
