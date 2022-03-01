using System;
using Xunit;
using Sample.SortList;

namespace Sample.Tests{
    public class UnitTest_SortList{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,sortList.naive(n));
        }
    }
}
