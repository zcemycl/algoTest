#include "DecodeWays/decodeWays.h"
#include "gtest/gtest.h"

using namespace std;

class decodeWays_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(decodeWays_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,decodeWays::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    DecodeWaysTests,
    decodeWays_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
