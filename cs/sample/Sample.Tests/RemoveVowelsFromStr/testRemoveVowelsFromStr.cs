using System;
using Xunit;
using Sample.RemoveVowelsFromStr;

namespace Sample.Tests{
    public class UnitTest_RemoveVowelsFromStr{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,removeVowelsFromStr.naive(n));
        }
    }
}
