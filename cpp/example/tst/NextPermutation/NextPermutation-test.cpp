#include "NextPermutation/nextPermutation.h"
#include "gtest/gtest.h"

using namespace std;

class nextPermutation_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(nextPermutation_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,nextPermutation::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    NextPermutationTests,
    nextPermutation_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
