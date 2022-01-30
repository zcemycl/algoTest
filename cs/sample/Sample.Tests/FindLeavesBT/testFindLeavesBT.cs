using System;
using Xunit;
using Sample.FindLeavesBT;

namespace Sample.Tests{
    public class UnitTest_FindLeavesBT{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,findLeavesBT.naive(n));
        }
    }
}
