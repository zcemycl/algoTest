#include "NaryTreePostorderTraversal/naryTreePostorderTraversal.h"
#include "gtest/gtest.h"

using namespace std;

class naryTreePostorderTraversal_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(naryTreePostorderTraversal_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,naryTreePostorderTraversal::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    NaryTreePostorderTraversalTests,
    naryTreePostorderTraversal_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
