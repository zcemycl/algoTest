#include "CoinChange/coinChange.h"
#include "gtest/gtest.h"

using namespace std;

class coinChange_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(coinChange_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,coinChange::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    CoinChangeTests,
    coinChange_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
