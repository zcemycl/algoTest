#include "MaxProdSubarray/maxProdSubarray.h"
#include "gtest/gtest.h"

using namespace std;

class maxProdSubarray_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int>>{
};

TEST_P(maxProdSubarray_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,maxProdSubarray::naive(nums));
};

INSTANTIATE_TEST_CASE_P(
    MaxProdSubarrayTests,
    maxProdSubarray_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{2,3,-2,4},6),
        make_tuple(vector<int>{-2,0,-1},0)
    )
);
