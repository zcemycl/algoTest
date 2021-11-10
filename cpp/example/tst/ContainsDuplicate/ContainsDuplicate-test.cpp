#include "ContainsDuplicate/containsDuplicate.h"
#include "gtest/gtest.h"

using namespace std;

class containsDuplicate_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,bool>>{
};

TEST_P(containsDuplicate_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    bool expected = get<1>(GetParam());
    ASSERT_EQ(expected,containsDuplicate::naive(nums));
};

INSTANTIATE_TEST_CASE_P(
    ContainsDuplicateTests,
    containsDuplicate_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int> {1,2,3,1},true),
        make_tuple(vector<int> {1,1,1,3,3,4,3,2,4,2},true),
        make_tuple(vector<int> {1,2,3,4},false),
        make_tuple(vector<int> {},false)
    )
);
