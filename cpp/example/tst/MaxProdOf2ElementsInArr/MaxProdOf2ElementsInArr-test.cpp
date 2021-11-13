#include "MaxProdOf2ElementsInArr/maxProdOf2ElementsInArr.h"
#include "gtest/gtest.h"

using namespace std;

class maxProdOf2ElementsInArr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int>>{
};

TEST_P(maxProdOf2ElementsInArr_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,maxProdOf2ElementsInArr::naive(nums));
};

INSTANTIATE_TEST_CASE_P(
    MaxProdOf2ElementsInArrTests,
    maxProdOf2ElementsInArr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{3,4,5,2},12),
        make_tuple(vector<int>{1,5,4,5},16),
        make_tuple(vector<int>{3,7},12)
    )
);
