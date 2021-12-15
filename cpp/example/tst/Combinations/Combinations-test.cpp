#include "Combinations/combinations.h"
#include "gtest/gtest.h"

using namespace std;

class combinations_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(combinations_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,combinations::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    CombinationsTests,
    combinations_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
