#include "Xyt/xyt.h"
#include "gtest/gtest.h"

using namespace std;

class xyt_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(xyt_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,xyt::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    XytTests,
    xyt_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
