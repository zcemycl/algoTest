#include "Subsets/subsets.h"
#include "gtest/gtest.h"

using namespace std;

class subsets_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(subsets_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,subsets::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    SubsetsTests,
    subsets_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
