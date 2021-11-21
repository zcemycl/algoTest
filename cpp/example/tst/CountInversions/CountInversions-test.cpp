#include "CountInversions/countInversions.h"
#include "gtest/gtest.h"

using namespace std;

class countInversions_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(countInversions_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,countInversions::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    CountInversionsTests,
    countInversions_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
