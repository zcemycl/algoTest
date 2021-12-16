using System;
using Xunit;
using Sample.SearchInBST;

namespace Sample.Tests{
    public class UnitTest_SearchInBST{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,searchInBST.naive(n));
        }
    }
}
