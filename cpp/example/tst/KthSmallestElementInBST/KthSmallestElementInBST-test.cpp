#include "KthSmallestElementInBST/kthSmallestElementInBST.h"
#include "gtest/gtest.h"

using namespace std;

class kthSmallestElementInBST_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(kthSmallestElementInBST_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,kthSmallestElementInBST::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    KthSmallestElementInBSTTests,
    kthSmallestElementInBST_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
