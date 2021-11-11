#include "ContainsDuplicate2/containsDuplicate2.h"
#include "gtest/gtest.h"

using namespace std;

class containsDuplicate2_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int,bool>>{
};

TEST_P(containsDuplicate2_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    int k = get<1>(GetParam());
    bool expected = get<2>(GetParam());
    ASSERT_EQ(expected,containsDuplicate2::naive(nums,k));
};

INSTANTIATE_TEST_CASE_P(
    ContainsDuplicate2Tests,
    containsDuplicate2_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{1,2,3,1},3,true),
        make_tuple(vector<int>{1,0,1,1},1,true),
        make_tuple(vector<int>{1,2,3,1,2,3},2,false)
    )
);
