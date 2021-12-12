using System;
using Xunit;
using Sample.MergeIntervals;

namespace Sample.Tests{
    public class UnitTest_MergeIntervals{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,mergeIntervals.naive(n));
        }
    }
}
