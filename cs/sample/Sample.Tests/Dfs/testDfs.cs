using System;
using Xunit;
using Sample.Dfs;

namespace Sample.Tests{
    public class UnitTest_Dfs{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,dfs.naive(n));
        }
    }
}
