#include "TenthLine/tenthLine.h"
#include "gtest/gtest.h"

using namespace std;

class tenthLine_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(tenthLine_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,tenthLine::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    TenthLineTests,
    tenthLine_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
