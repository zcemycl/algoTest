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
            int result = Solution.soln2(1,2);
            Assert.Equal(3,result);
        }

        [Fact]
        public void Test2(){
            Solution s = new Solution(4,2);
            int result = s.soln1();
            Assert.Equal(6,result);
        }

        [Fact]
        public void Test3(){
            Solution1 s = new Solution1(100,100);
            Assert.Equal(200,s.soln1());
        }
        [Fact]
        public void Test4(){
            Assert.Equal(10000,Solution1.soln2(100,100));
        }
    }
}
