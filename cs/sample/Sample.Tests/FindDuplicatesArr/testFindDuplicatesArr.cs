using System;
using Xunit;
using Sample.FindDuplicatesArr;

namespace Sample.Tests{
    public class UnitTest_FindDuplicatesArr{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,findDuplicatesArr.naive(n));
        }
    }
}
