#include "BinaryTreePruning/binaryTreePruning.h"
#include "gtest/gtest.h"

using namespace std;

class binaryTreePruning_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(binaryTreePruning_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,binaryTreePruning::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    BinaryTreePruningTests,
    binaryTreePruning_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
