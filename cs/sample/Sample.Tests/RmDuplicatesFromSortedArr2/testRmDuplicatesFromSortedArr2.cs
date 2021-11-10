using System;
using Xunit;
using Sample.RmDuplicatesFromSortedArr2;

namespace Sample.Tests{
    public class UnitTest_RmDuplicatesFromSortedArr2{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,rmDuplicatesFromSortedArr2.naive(n));
        }
    }
}
