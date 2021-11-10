#include "FindDuplicatesArr/findDuplicatesArr.h"
#include "gtest/gtest.h"

using namespace std;

class findDuplicatesArr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,vector<int>>>{
};

TEST_P(findDuplicatesArr_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    vector<int> expected = get<1>(GetParam());
    ASSERT_EQ(expected,findDuplicatesArr::naive(nums));
};

INSTANTIATE_TEST_CASE_P(
    FindDuplicatesArrTests,
    findDuplicatesArr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{4,3,2,7,8,2,3,1},vector<int>{2,3}),
        make_tuple(vector<int>{},vector<int>{}),
        make_tuple(vector<int>{1,1,2},vector<int>{1}),
        make_tuple(vector<int>{1},vector<int>{})
    )
);
