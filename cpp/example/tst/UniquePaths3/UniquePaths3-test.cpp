#include "UniquePaths3/uniquePaths3.h"
#include "gtest/gtest.h"

using namespace std;

class uniquePaths3_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(uniquePaths3_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,uniquePaths3::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    UniquePaths3Tests,
    uniquePaths3_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
