#include "BinaryTreePostorderTraversal/binaryTreePostorderTraversal.h"
#include "gtest/gtest.h"

using namespace std;

class binaryTreePostorderTraversal_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(binaryTreePostorderTraversal_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,binaryTreePostorderTraversal::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    BinaryTreePostorderTraversalTests,
    binaryTreePostorderTraversal_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
