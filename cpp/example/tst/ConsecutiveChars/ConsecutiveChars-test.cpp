#include "ConsecutiveChars/consecutiveChars.h"
#include "gtest/gtest.h"

using namespace std;

class consecutiveChars_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(consecutiveChars_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,consecutiveChars::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ConsecutiveCharsTests,
    consecutiveChars_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
