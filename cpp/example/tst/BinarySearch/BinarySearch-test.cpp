#include "BinarySearch/binarySearch.h"
#include "gtest/gtest.h"

using namespace std;

class binarySearch_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int,int>>{
};

TEST_P(binarySearch_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    int target = get<1>(GetParam());
    int expected = get<2>(GetParam());
    ASSERT_EQ(expected,binarySearch::naive(nums,target));
};

INSTANTIATE_TEST_CASE_P(
    BinarySearchTests,
    binarySearch_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int> {-1,0,3,5,9,12},9,4),
        make_tuple(vector<int> {-1,0,3,5,9,12},2,-1)
    )
);
