using System;
using Xunit;
using Sample.ContainsDuplicate;

namespace Sample.Tests{
    public class UnitTest_ContainsDuplicate{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,containsDuplicate.naive(n));
        }
    }
}
