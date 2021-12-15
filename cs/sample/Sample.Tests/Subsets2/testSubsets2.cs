using System;
using Xunit;
using Sample.Subsets2;

namespace Sample.Tests{
    public class UnitTest_Subsets2{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,subsets2.naive(n));
        }
    }
}
