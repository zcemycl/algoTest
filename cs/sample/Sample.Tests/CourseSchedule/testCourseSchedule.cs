using System;
using Xunit;
using Sample.CourseSchedule;

namespace Sample.Tests{
    public class UnitTest_CourseSchedule{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,courseSchedule.naive(n));
        }
    }
}
