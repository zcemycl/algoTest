#include "ComplementBase10Int/complementBase10Int.h"
#include "gtest/gtest.h"

using namespace std;

class complementBase10Int_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(complementBase10Int_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,complementBase10Int::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ComplementBase10IntTests,
    complementBase10Int_MultipleParamsTests,
    ::testing::Values(
        make_tuple(5,2),make_tuple(7,0),make_tuple(10,5)
    )
);
