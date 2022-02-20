#include "BtLevelOrderTraversal2/btLevelOrderTraversal2.h"
#include "gtest/gtest.h"

using namespace std;

class btLevelOrderTraversal2_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(btLevelOrderTraversal2_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,btLevelOrderTraversal2::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    BtLevelOrderTraversal2Tests,
    btLevelOrderTraversal2_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
