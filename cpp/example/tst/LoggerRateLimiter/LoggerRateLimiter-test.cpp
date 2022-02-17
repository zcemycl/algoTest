#include "LoggerRateLimiter/loggerRateLimiter.h"
#include "gtest/gtest.h"

using namespace std;

class loggerRateLimiter_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(loggerRateLimiter_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,loggerRateLimiter::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    LoggerRateLimiterTests,
    loggerRateLimiter_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
