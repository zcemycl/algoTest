#include "SearchInRotatedSortedArr/searchInRotatedSortedArr.h"
#include "gtest/gtest.h"

using namespace std;

class searchInRotatedSortedArr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int,int>>{
};

TEST_P(searchInRotatedSortedArr_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    int target = get<1>(GetParam());
    int expected = get<2>(GetParam());
    ASSERT_EQ(expected,searchInRotatedSortedArr::naive(nums,target));
};

INSTANTIATE_TEST_CASE_P(
    SearchInRotatedSortedArrTests,
    searchInRotatedSortedArr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{4,5,6,7,0,1,2},0,4),
        make_tuple(vector<int>{4,5,6,7,0,1,2},3,-1),
        make_tuple(vector<int>{1},0,-1)
    )
);
