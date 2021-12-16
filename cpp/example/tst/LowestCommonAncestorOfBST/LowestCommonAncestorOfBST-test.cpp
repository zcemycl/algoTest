#include "LowestCommonAncestorOfBST/lowestCommonAncestorOfBST.h"
#include "gtest/gtest.h"

using namespace std;

class lowestCommonAncestorOfBST_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(lowestCommonAncestorOfBST_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,lowestCommonAncestorOfBST::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    LowestCommonAncestorOfBSTTests,
    lowestCommonAncestorOfBST_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
