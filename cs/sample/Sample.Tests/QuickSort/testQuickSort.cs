using System;
using Xunit;
using Sample.QuickSort;

namespace Sample.Tests{
    public class UnitTest_QuickSort{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,quickSort.naive(n));
        }
    }
}
