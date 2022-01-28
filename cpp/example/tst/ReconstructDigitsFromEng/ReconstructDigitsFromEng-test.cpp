#include "ReconstructDigitsFromEng/reconstructDigitsFromEng.h"
#include "gtest/gtest.h"

using namespace std;

class reconstructDigitsFromEng_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(reconstructDigitsFromEng_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,reconstructDigitsFromEng::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ReconstructDigitsFromEngTests,
    reconstructDigitsFromEng_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
