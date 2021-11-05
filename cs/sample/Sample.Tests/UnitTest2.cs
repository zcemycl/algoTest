using System;
using Xunit;
using Sample;
using Sample.NewClass1;

namespace Sample.Tests
{
    public class UnitTest2
    {
        [Fact]
        public void Test5()
        {
            Assert.Equal(9,Solution2.soln2(3,3));
        }

        [Fact]
        public void Test6(){
            Solution2 s = new Solution2(4,2);
            int result = s.soln1();
            Assert.Equal(8,result);
        }


    }
}
