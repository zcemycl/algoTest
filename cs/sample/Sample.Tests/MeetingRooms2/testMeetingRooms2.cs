using System;
using Xunit;
using Sample.MeetingRooms2;

namespace Sample.Tests{
    public class UnitTest_MeetingRooms2{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,meetingRooms2.naive(n));
        }
    }
}
