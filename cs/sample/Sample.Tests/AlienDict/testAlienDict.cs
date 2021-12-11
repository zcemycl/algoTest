using System;
using Xunit;
using Sample.AlienDict;

namespace Sample.Tests{
    public class UnitTest_AlienDict{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,alienDict.naive(n));
        }
    }
}
