#include "UniquePaths/uniquePaths.h"
#include "gtest/gtest.h"

using namespace std;

class uniquePaths_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(uniquePaths_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,uniquePaths::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    UniquePathsTests,
    uniquePaths_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
