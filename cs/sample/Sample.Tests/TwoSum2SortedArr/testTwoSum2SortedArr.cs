using System;
using Xunit;
using Sample.TwoSum2SortedArr;

namespace Sample.Tests{
    public class UnitTest_TwoSum2SortedArr{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,twoSum2SortedArr.naive(n));
        }
    }
}
