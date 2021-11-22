#include "MergeSort/mergeSort.h"
#include "gtest/gtest.h"

using namespace std;

class mergeSort_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,vector<int>>>{
};

TEST_P(mergeSort_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    vector<int> expected = get<1>(GetParam());
    ASSERT_EQ(expected,mergeSort::naive(nums));
};

INSTANTIATE_TEST_CASE_P(
    MergeSortTests,
    mergeSort_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{4,5,1,8,10,11,0,7,9},vector<int>{0,1,4,5,7,8,9,10,11}),
        make_tuple(vector<int>{4,2,3,1},vector<int>{1,2,3,4})
    )
);
