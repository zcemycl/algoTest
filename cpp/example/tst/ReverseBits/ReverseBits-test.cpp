#include "ReverseBits/reverseBits.h"
#include "gtest/gtest.h"

using namespace std;

class reverseBits_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(reverseBits_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,reverseBits::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ReverseBitsTests,
    reverseBits_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
