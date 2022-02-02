#include "BestTime2BuyAndSellStock2/bestTime2BuyAndSellStock2.h"
#include "gtest/gtest.h"

using namespace std;

class bestTime2BuyAndSellStock2_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(bestTime2BuyAndSellStock2_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,bestTime2BuyAndSellStock2::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    BestTime2BuyAndSellStock2Tests,
    bestTime2BuyAndSellStock2_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
