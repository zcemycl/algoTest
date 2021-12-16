#include "BinaryTreePreorderTraversal/binaryTreePreorderTraversal.h"
#include "gtest/gtest.h"

using namespace std;

class binaryTreePreorderTraversal_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(binaryTreePreorderTraversal_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,binaryTreePreorderTraversal::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    BinaryTreePreorderTraversalTests,
    binaryTreePreorderTraversal_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
