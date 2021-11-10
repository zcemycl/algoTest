#include "ConfusingNum/confusingNum.h"
#include "gtest/gtest.h"

using namespace std;

class confusingNum_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(confusingNum_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,confusingNum::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ConfusingNumTests,
    confusingNum_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
