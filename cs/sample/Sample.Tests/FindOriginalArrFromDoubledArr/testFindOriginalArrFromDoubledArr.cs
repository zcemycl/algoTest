using System;
using Xunit;
using Sample.FindOriginalArrFromDoubledArr;

namespace Sample.Tests{
    public class UnitTest_FindOriginalArrFromDoubledArr{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,findOriginalArrFromDoubledArr.naive(n));
        }
    }
}
