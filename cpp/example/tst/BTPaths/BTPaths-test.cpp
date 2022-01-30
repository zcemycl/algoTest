#include "BTPaths/bTPaths.h"
#include "gtest/gtest.h"

using namespace std;

class bTPaths_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(bTPaths_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,bTPaths::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    BTPathsTests,
    bTPaths_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
