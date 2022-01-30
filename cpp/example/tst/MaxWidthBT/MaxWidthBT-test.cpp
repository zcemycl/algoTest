#include "MaxWidthBT/maxWidthBT.h"
#include "gtest/gtest.h"

using namespace std;

class maxWidthBT_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(maxWidthBT_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,maxWidthBT::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MaxWidthBTTests,
    maxWidthBT_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
