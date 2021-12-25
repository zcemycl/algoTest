#include "MissingNum/missingNum.h"
#include "gtest/gtest.h"

using namespace std;

class missingNum_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int>>{
};

TEST_P(missingNum_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,missingNum::naive(nums));
};

INSTANTIATE_TEST_CASE_P(
    MissingNumTests,
    missingNum_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{3,0,1},2),
        make_tuple(vector<int>{0,1},2),
        make_tuple(vector<int>{9,6,4,2,3,5,7,0,1},8)
    )
);
