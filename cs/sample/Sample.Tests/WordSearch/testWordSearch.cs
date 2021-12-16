using System;
using Xunit;
using Sample.WordSearch;

namespace Sample.Tests{
    public class UnitTest_WordSearch{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,wordSearch.naive(n));
        }
    }
}
