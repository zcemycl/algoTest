#include "Sqrtx/sqrtx.h"
#include "gtest/gtest.h"

using namespace std;

class sqrtx_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(sqrtx_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,sqrtx::binary(n));
};

INSTANTIATE_TEST_CASE_P(
    SqrtxTests,
    sqrtx_MultipleParamsTests,
    ::testing::Values(
        make_tuple(9,3), 
        make_tuple(16,4),
        make_tuple(2,1),
        make_tuple(1,1),
        make_tuple(5,2)
    )
);