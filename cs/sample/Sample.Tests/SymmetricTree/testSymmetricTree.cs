using System;
using Xunit;
using Sample.SymmetricTree;

namespace Sample.Tests{
    public class UnitTest_SymmetricTree{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,symmetricTree.naive(n));
        }
    }
}
