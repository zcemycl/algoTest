#include "MissingNum/missingNum.h"
#include "gtest/gtest.h"

using namespace std;

class missingNum_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(missingNum_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,missingNum::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MissingNumTests,
    missingNum_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
