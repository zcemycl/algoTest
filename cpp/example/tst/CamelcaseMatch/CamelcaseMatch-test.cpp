#include "CamelcaseMatch/camelcaseMatch.h"
#include "gtest/gtest.h"

using namespace std;

class camelcaseMatch_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(camelcaseMatch_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,camelcaseMatch::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    CamelcaseMatchTests,
    camelcaseMatch_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
