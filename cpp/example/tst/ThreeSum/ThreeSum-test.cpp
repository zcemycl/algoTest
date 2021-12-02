#include "ThreeSum/threeSum.h"
#include "gtest/gtest.h"

using namespace std;

class threeSum_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(threeSum_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,threeSum::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ThreeSumTests,
    threeSum_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
