using System;
using Xunit;
using Sample.TopKFrequentElements;

namespace Sample.Tests{
    public class UnitTest_TopKFrequentElements{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,topKFrequentElements.naive(n));
        }
    }
}
