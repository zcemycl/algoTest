#include "NaryTreePreorderTraversal/naryTreePreorderTraversal.h"
#include "gtest/gtest.h"

using namespace std;

class naryTreePreorderTraversal_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(naryTreePreorderTraversal_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,naryTreePreorderTraversal::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    NaryTreePreorderTraversalTests,
    naryTreePreorderTraversal_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
