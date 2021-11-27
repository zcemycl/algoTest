#include "BfsShortestPaths/bfsShortestPaths.h"
#include "gtest/gtest.h"

using namespace std;

class bfsShortestPaths_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(bfsShortestPaths_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,bfsShortestPaths::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    BfsShortestPathsTests,
    bfsShortestPaths_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
