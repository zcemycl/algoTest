#include "RmDuplicatesFromSortedArr2/rmDuplicatesFromSortedArr2.h"
#include "gtest/gtest.h"

using namespace std;

class rmDuplicatesFromSortedArr2_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(rmDuplicatesFromSortedArr2_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,rmDuplicatesFromSortedArr2::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    RmDuplicatesFromSortedArr2Tests,
    rmDuplicatesFromSortedArr2_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
