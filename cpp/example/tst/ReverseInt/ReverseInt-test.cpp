#include "ReverseInt/reverseInt.h"
#include "gtest/gtest.h"

using namespace std;

class reverseInt_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(reverseInt_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,reverseInt::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ReverseIntTests,
    reverseInt_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0),
        make_tuple(123,321),
        make_tuple(-123,-321),
        make_tuple(120,21),
        make_tuple(-1123456789,0),
        make_tuple(1123456789,0)
    )
);
