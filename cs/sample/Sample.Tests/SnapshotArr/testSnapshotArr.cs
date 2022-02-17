using System;
using Xunit;
using Sample.SnapshotArr;

namespace Sample.Tests{
    public class UnitTest_SnapshotArr{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,snapshotArr.naive(n));
        }
    }
}
