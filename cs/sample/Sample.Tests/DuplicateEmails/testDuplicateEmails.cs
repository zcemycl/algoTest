using System;
using Xunit;
using Sample.DuplicateEmails;

namespace Sample.Tests{
    public class UnitTest_DuplicateEmails{
        [Theory]
        [InlineData("a@b.com")]
        public void checkResult(string s){
            Assert.Equal(s,duplicateEmails.naive());
        }
    }
}
