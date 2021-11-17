#include "BestTime2BuyAndSellStock/bestTime2BuyAndSellStock.h"
#include "gtest/gtest.h"

using namespace std;

class bestTime2BuyAndSellStock_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int>>{
};

TEST_P(bestTime2BuyAndSellStock_MultipleParamsTests, CheckAns){
    vector<int> prices = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,bestTime2BuyAndSellStock::naive(prices));
};

INSTANTIATE_TEST_CASE_P(
    BestTime2BuyAndSellStockTests,
    bestTime2BuyAndSellStock_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{7,1,5,3,6,4},5),
        make_tuple(vector<int>{7,6,4,3,1},0),
        make_tuple(vector<int>{2,4,1},2)
    )
);
