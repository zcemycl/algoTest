#include "CountBinarySubstrs/countBinarySubstrs.h"
#include "gtest/gtest.h"

using namespace std;

class countBinarySubstrs_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(countBinarySubstrs_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,countBinarySubstrs::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    CountBinarySubstrsTests,
    countBinarySubstrs_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
