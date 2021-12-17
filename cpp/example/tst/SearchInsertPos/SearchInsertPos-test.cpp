#include "SearchInsertPos/searchInsertPos.h"
#include "gtest/gtest.h"

using namespace std;

class searchInsertPos_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(searchInsertPos_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,searchInsertPos::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    SearchInsertPosTests,
    searchInsertPos_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
