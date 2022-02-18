using System;
using Xunit;
using Sample.CountSqSubmatricesWithAll1s;

namespace Sample.Tests{
    public class UnitTest_CountSqSubmatricesWithAll1s{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,countSqSubmatricesWithAll1s.naive(n));
        }
    }
}
