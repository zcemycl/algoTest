using System;
using Xunit;
using Sample.ConvertBST2GreaterTree;

namespace Sample.Tests{
    public class UnitTest_ConvertBST2GreaterTree{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,convertBST2GreaterTree.naive(n));
        }
    }
}
