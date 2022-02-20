#include "BtVerticalOrderTraversal/btVerticalOrderTraversal.h"
#include "gtest/gtest.h"

using namespace std;

class btVerticalOrderTraversal_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(btVerticalOrderTraversal_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,btVerticalOrderTraversal::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    BtVerticalOrderTraversalTests,
    btVerticalOrderTraversal_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
