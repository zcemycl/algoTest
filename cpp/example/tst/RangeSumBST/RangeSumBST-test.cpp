#include "RangeSumBST/rangeSumBST.h"
#include "gtest/gtest.h"

using namespace std;

class rangeSumBST_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(rangeSumBST_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,rangeSumBST::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    RangeSumBSTTests,
    rangeSumBST_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
