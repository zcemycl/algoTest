using System;
using Xunit;
using Sample.RemoveVowelsFromStr;

namespace Sample.Tests{
    public class UnitTest_RemoveVowelsFromStr{
        [Theory]
        [InlineData("aeiou","")]
        [InlineData("leetcodeisacommunityforcoders","ltcdscmmntyfrcdrs")]
        public void checkResult(string s,string expected){
            Assert.Equal(expected,removeVowelsFromStr.naive(s));
        }
    }
}
