#include "BinaryTreeInorderTraversal/binaryTreeInorderTraversal.h"
#include "gtest/gtest.h"

using namespace std;

class binaryTreeInorderTraversal_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(binaryTreeInorderTraversal_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,binaryTreeInorderTraversal::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    BinaryTreeInorderTraversalTests,
    binaryTreeInorderTraversal_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
