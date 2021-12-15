using System;
using Xunit;
using Sample.ValidateBST;

namespace Sample.Tests{
    public class UnitTest_ValidateBST{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,validateBST.naive(n));
        }
    }
}
