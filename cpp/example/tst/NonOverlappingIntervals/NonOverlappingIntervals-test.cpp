#include "NonOverlappingIntervals/nonOverlappingIntervals.h"
#include "gtest/gtest.h"

using namespace std;

class nonOverlappingIntervals_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(nonOverlappingIntervals_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,nonOverlappingIntervals::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    NonOverlappingIntervalsTests,
    nonOverlappingIntervals_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
