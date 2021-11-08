using System;
using Xunit;
using Sample.LengthOfLongestSubString;

namespace Sample.Tests{
    public class UnitTest_LengthOfLongestSubString{
        [Theory]
        [InlineData("",0)]
        [InlineData("abcabcbb",3)]
        [InlineData("bbbbbb",1)]
        [InlineData("dvdf",3)]
        [InlineData(" ",1)]
        [InlineData("pwwkew",3)]
        public void checkResult(string s,int result){
            Assert.Equal(result,lengthOfLongestSubString.naive(s));
        }
    }
}