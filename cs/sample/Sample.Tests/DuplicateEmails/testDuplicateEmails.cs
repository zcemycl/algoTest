using System;
using Xunit;
using Sample.DuplicateEmails;

namespace Sample.Tests{
    public class UnitTest_DuplicateEmails{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,duplicateEmails.naive(n));
        }
    }
}
