#include "MaxSubarray/maxSubarray.h"
#include "gtest/gtest.h"

using namespace std;

class maxSubarray_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int>>{
};

TEST_P(maxSubarray_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,maxSubarray::naive(nums));
};

INSTANTIATE_TEST_CASE_P(
    MaxSubarrayTests,
    maxSubarray_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{-2,1,-3,4,-1,2,1,-5,4},6),
        make_tuple(vector<int>{5,4,-1,7,8},23)
    )
);
