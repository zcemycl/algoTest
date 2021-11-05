using System;
using Xunit;
using Sample.TwoSum;

namespace Sample.Tests
{
    public class UnitTest_TwoSum
    {
        [Fact]
        public void TestNaive1()
        {
            int[] arr = new int[3] {2,4,1};
            int[] arr2= new int[2] {0,1};
            Assert.Equal(arr2,twoSum.naive(arr,6));
        }

        [Fact]
        public void TestHashM1()
        {
            int[] arr = new int[3] {2,4,1};
            int[] arr2= new int[2] {1,0};
            Assert.Equal(arr2,twoSum.hashM(arr,6));
        }

        // [1,1,1,1,1,4,1,1,1,1,1,7,1,1,1,1,1]
        // 11 
        // BUg

    }
}
