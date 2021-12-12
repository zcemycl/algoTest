#include "MergeIntervals/mergeIntervals.h"
#include "gtest/gtest.h"

using namespace std;

class mergeIntervals_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(mergeIntervals_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,mergeIntervals::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MergeIntervalsTests,
    mergeIntervals_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
