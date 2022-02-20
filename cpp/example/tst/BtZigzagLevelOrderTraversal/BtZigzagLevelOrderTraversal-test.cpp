#include "BtZigzagLevelOrderTraversal/btZigzagLevelOrderTraversal.h"
#include "gtest/gtest.h"

using namespace std;

class btZigzagLevelOrderTraversal_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(btZigzagLevelOrderTraversal_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,btZigzagLevelOrderTraversal::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    BtZigzagLevelOrderTraversalTests,
    btZigzagLevelOrderTraversal_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
