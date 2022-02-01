using System;
using Xunit;
using Sample.EvenOddTree;

namespace Sample.Tests{
    public class UnitTest_EvenOddTree{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,evenOddTree.naive(n));
        }
    }
}
