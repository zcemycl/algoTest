using System;
using Xunit;
using Sample.Find1stAndLastPositionOfElementInSortedArr;

namespace Sample.Tests{
    public class UnitTest_Find1stAndLastPositionOfElementInSortedArr{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,find1stAndLastPositionOfElementInSortedArr.naive(n));
        }
    }
}
