#include "BinaryTreeLevelOrderTraversal/binaryTreeLevelOrderTraversal.h"
#include "gtest/gtest.h"

using namespace std;

class binaryTreeLevelOrderTraversal_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(binaryTreeLevelOrderTraversal_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,binaryTreeLevelOrderTraversal::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    BinaryTreeLevelOrderTraversalTests,
    binaryTreeLevelOrderTraversal_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
