using System;
using Xunit;
using Sample.SameTree;

namespace Sample.Tests{
    public class UnitTest_SameTree{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,sameTree.naive(n));
        }
    }
}
