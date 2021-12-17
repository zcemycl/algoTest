#include "MinPathSum/minPathSum.h"
#include "gtest/gtest.h"

using namespace std;

class minPathSum_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(minPathSum_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,minPathSum::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MinPathSumTests,
    minPathSum_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
