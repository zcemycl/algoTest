#include "BinaryTreeMaxPathSum/binaryTreeMaxPathSum.h"
#include "gtest/gtest.h"

using namespace std;

class binaryTreeMaxPathSum_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(binaryTreeMaxPathSum_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,binaryTreeMaxPathSum::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    BinaryTreeMaxPathSumTests,
    binaryTreeMaxPathSum_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
