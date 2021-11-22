#include "CountInversions/countInversions.h"
#include "gtest/gtest.h"

using namespace std;

class countInversions_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int>>{
};

TEST_P(countInversions_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    if (nums.size()==0)
        nums = countInversions::loadtxt2arr();
    int expected = get<1>(GetParam());
    int count; vector<int> arr;
    tie(arr,count) = countInversions::naive(nums);
    ASSERT_EQ(expected,count);
};

INSTANTIATE_TEST_CASE_P(
    CountInversionsTests,
    countInversions_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{4,3,2,1},6),
        make_tuple(vector<int>{5,4,3,2,1},10),
        make_tuple(vector<int>{2,3,1},2),
        make_tuple(vector<int>{},2407905288)
    )
);
