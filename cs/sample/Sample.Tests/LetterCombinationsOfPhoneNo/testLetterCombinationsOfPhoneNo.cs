using System;
using Xunit;
using Sample.LetterCombinationsOfPhoneNo;

namespace Sample.Tests{
    public class UnitTest_LetterCombinationsOfPhoneNo{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,letterCombinationsOfPhoneNo.naive(n));
        }
    }
}
