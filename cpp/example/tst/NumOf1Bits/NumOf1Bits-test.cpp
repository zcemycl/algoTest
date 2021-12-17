#include "NumOf1Bits/numOf1Bits.h"
#include "gtest/gtest.h"

using namespace std;

class numOf1Bits_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(numOf1Bits_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,numOf1Bits::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    NumOf1BitsTests,
    numOf1Bits_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
