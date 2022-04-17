#include "MinWindowSubstr/minWindowSubstr.h"
#include "gtest/gtest.h"

using namespace std;

class minWindowSubstr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(minWindowSubstr_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,minWindowSubstr::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MinWindowSubstrTests,
    minWindowSubstr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
