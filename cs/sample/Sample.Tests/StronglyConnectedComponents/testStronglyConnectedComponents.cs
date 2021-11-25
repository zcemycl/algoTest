using System;
using Xunit;
using Sample.StronglyConnectedComponents;

namespace Sample.Tests{
    public class UnitTest_StronglyConnectedComponents{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,stronglyConnectedComponents.naive(n));
        }
    }
}
