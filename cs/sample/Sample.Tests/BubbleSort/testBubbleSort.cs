using System;
using Xunit;
using Sample.BubbleSort;

namespace Sample.Tests{
    public class UnitTest_BubbleSort{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,bubbleSort.naive(n));
        }
    }
}
