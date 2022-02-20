#include "RmCoveredIntervals/rmCoveredIntervals.h"
#include "gtest/gtest.h"

using namespace std;

class rmCoveredIntervals_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(rmCoveredIntervals_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,rmCoveredIntervals::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    RmCoveredIntervalsTests,
    rmCoveredIntervals_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
