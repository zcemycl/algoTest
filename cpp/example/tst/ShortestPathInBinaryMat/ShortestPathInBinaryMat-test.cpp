#include "ShortestPathInBinaryMat/shortestPathInBinaryMat.h"
#include "gtest/gtest.h"

using namespace std;

class shortestPathInBinaryMat_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(shortestPathInBinaryMat_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,shortestPathInBinaryMat::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ShortestPathInBinaryMatTests,
    shortestPathInBinaryMat_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
