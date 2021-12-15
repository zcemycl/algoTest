#include "SubtreeOfAnotherTree/subtreeOfAnotherTree.h"
#include "gtest/gtest.h"

using namespace std;

class subtreeOfAnotherTree_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(subtreeOfAnotherTree_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,subtreeOfAnotherTree::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    SubtreeOfAnotherTreeTests,
    subtreeOfAnotherTree_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
