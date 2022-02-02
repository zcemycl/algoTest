#include "UniquePaths2/uniquePaths2.h"
#include "gtest/gtest.h"

using namespace std;

class uniquePaths2_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(uniquePaths2_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,uniquePaths2::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    UniquePaths2Tests,
    uniquePaths2_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
