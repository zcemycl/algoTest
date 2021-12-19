using System;
using Xunit;
using Sample.DesignAddSearchWordsDataStructure;

namespace Sample.Tests{
    public class UnitTest_DesignAddSearchWordsDataStructure{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,designAddSearchWordsDataStructure.naive(n));
        }
    }
}
