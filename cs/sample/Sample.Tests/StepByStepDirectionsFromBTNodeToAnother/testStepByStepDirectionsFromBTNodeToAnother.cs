using System;
using Xunit;
using Sample.StepByStepDirectionsFromBTNodeToAnother;

namespace Sample.Tests{
    public class UnitTest_StepByStepDirectionsFromBTNodeToAnother{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,stepByStepDirectionsFromBTNodeToAnother.naive(n));
        }
    }
}
