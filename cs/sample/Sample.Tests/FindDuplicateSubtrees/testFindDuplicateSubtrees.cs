using System;
using Xunit;
using Sample.FindDuplicateSubtrees;

namespace Sample.Tests{
    public class UnitTest_FindDuplicateSubtrees{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,findDuplicateSubtrees.naive(n));
        }
    }
}
