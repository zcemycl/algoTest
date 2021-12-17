#include "CountingBits/countingBits.h"
#include "gtest/gtest.h"

using namespace std;

class countingBits_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(countingBits_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,countingBits::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    CountingBitsTests,
    countingBits_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
