using System;
using Xunit;
using Sample;

namespace Sample.Tests
{
    public class UnitTest1
    {
        [Fact]
        public void Test1()
        {
            // var program = new Program();
            int result = Program.soln2(1,2);
            Assert.Equal(3,result);
        }
    }
}
