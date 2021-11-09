using System;
using Xunit;
using Sample.Roman2Int;

namespace Sample.Tests{
    public class UnitTest_Roman2Int{
        [Theory]
        [InlineData("III",3)]
        [InlineData("IV",4)]
        [InlineData("IX",9)]
        [InlineData("LVIII",58)]
        [InlineData("MCMXCIV",1994)]
        public void checkResult(string s,int expected){
            Assert.Equal(expected,roman2Int.naive(s));
        }
    }
}