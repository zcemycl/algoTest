#include "InvertBinaryTree/invertBinaryTree.h"
#include "gtest/gtest.h"

using namespace std;

class invertBinaryTree_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(invertBinaryTree_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,invertBinaryTree::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    InvertBinaryTreeTests,
    invertBinaryTree_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
