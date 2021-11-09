#include "gtest/gtest.h"
#include "RemoveDuplicatesFromSortedArr/removeDuplicatesFromSortedArr.h"
#include <vector>

using namespace std;

class removeDuplicatesFromSortedArr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int>>{
};

TEST_P(removeDuplicatesFromSortedArr_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,removeDuplicatesFromSortedArr::naive(nums));
};

INSTANTIATE_TEST_CASE_P(
    RemoveDuplicatesFromSortedArrTests,
    removeDuplicatesFromSortedArr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{1,1,2},2),
        make_tuple(vector<int>{},0),
        make_tuple(vector<int>{1},1),
        make_tuple(vector<int>{1,2},2),
        make_tuple(vector<int>{0,0,1,1,1,2,2,3,3,4},5),
        make_tuple(vector<int>{0,0,0,0,2,2,2,4,4,4},3)
    )
);
