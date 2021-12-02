#include "TwoSum2SortedArr/twoSum2SortedArr.h"
#include "gtest/gtest.h"

using namespace std;

class twoSum2SortedArr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int,vector<int>>>{
};

TEST_P(twoSum2SortedArr_MultipleParamsTests, CheckAns){
    vector<int> numbers = get<0>(GetParam());
    int target = get<1>(GetParam());
    vector<int> expected = get<2>(GetParam());
    ASSERT_EQ(expected,twoSum2SortedArr::naive(numbers,target));
};

INSTANTIATE_TEST_CASE_P(
    TwoSum2SortedArrTests,
    twoSum2SortedArr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{2,7,11,15},9,vector<int>{1,2}),
        make_tuple(vector<int>{2,3,4},6,vector<int>{1,3}),
        make_tuple(vector<int>{-1,0},-1,vector<int>{1,2})
    )
);
