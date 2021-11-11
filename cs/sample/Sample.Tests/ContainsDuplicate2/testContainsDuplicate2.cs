using System;
using Xunit;
using Sample.ContainsDuplicate2;

namespace Sample.Tests{
    public class UnitTest_ContainsDuplicate2{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,containsDuplicate2.naive(n));
        }
    }
}
