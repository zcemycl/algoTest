using System;
using Xunit;
using Sample.SearchInsertPos;

namespace Sample.Tests{
    public class UnitTest_SearchInsertPos{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,searchInsertPos.naive(n));
        }
    }
}
