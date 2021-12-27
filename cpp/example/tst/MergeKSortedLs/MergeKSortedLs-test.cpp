#include "MergeKSortedLs/mergeKSortedLs.h"
#include "gtest/gtest.h"

using namespace std;

class mergeKSortedLs_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(mergeKSortedLs_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,mergeKSortedLs::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MergeKSortedLsTests,
    mergeKSortedLs_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
