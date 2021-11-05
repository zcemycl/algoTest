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
            Assert.Equal(arr,twoSum.naive(arr,6));
        }

    }
}
