using System;
using Xunit;
using Sample.LeagueTable;

namespace Sample.Tests{
    public class UnitTest_LeagueTable{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,leagueTable.naive(n));
        }
    }
}
