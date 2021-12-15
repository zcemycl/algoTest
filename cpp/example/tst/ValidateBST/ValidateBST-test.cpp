#include "ValidateBST/validateBST.h"
#include "gtest/gtest.h"

using namespace std;

class validateBST_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(validateBST_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,validateBST::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ValidateBSTTests,
    validateBST_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
