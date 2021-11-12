using System;
using Xunit;
using Sample.ConfusingNum;

namespace Sample.Tests{
    public class UnitTest_ConfusingNum{
        [Theory]
        [InlineData(0,false)]
        [InlineData(11,false)]
        [InlineData(1,false)]
        [InlineData(25,false)]
        [InlineData(6,true)]
        [InlineData(89,true)]
        [InlineData(1196,true)]
        public void checkResult(int n,bool expected){
            Assert.Equal(expected,confusingNum.naive(n));
        }
    }
}
