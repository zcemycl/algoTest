using System;
using Xunit;
using Sample.Search2DMat;

namespace Sample.Tests{
    public class UnitTest_Search2DMat{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,search2DMat.naive(n));
        }
    }
}
