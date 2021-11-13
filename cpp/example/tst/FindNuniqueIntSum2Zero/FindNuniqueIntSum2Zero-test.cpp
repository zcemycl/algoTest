#include "FindNuniqueIntSum2Zero/findNuniqueIntSum2Zero.h"
#include "gtest/gtest.h"

using namespace std;

class findNuniqueIntSum2Zero_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,vector<int>>>{
};

TEST_P(findNuniqueIntSum2Zero_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    vector<int> expected = get<1>(GetParam());
    ASSERT_EQ(expected,findNuniqueIntSum2Zero::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    FindNuniqueIntSum2ZeroTests,
    findNuniqueIntSum2Zero_MultipleParamsTests,
    ::testing::Values(
        make_tuple(1,vector<int>{0}),
        make_tuple(3,vector<int>{0,1,-1}),
        make_tuple(5,vector<int>{0,1,-1,2,-2}),
        make_tuple(4,vector<int>{1,-1,2,-2})
    )
);
