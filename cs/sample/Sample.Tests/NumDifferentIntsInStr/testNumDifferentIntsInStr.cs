using System;
using Xunit;
using Sample.NumDifferentIntsInStr;

namespace Sample.Tests{
    public class UnitTest_NumDifferentIntsInStr{
        [Theory]
        [InlineData("a123bc348ef34",3)]
        [InlineData("leet1234code234",2)]
        [InlineData("",0)]
        [InlineData("a1b01c001",1)]
        public void checkResult(string word,int expected){
            Assert.Equal(expected,numDifferentIntsInStr.naive(word));
        }
    }
}
