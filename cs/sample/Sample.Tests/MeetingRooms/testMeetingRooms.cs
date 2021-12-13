using System;
using Xunit;
using Sample.MeetingRooms;

namespace Sample.Tests{
    public class UnitTest_MeetingRooms{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,meetingRooms.naive(n));
        }
    }
}
