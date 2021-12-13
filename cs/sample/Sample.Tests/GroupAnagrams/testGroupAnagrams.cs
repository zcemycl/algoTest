using System;
using Xunit;
using Sample.GroupAnagrams;

namespace Sample.Tests{
    public class UnitTest_GroupAnagrams{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,groupAnagrams.naive(n));
        }
    }
}
