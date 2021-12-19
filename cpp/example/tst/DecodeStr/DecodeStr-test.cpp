#include "DecodeStr/decodeStr.h"
#include "gtest/gtest.h"

using namespace std;

class decodeStr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(decodeStr_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,decodeStr::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    DecodeStrTests,
    decodeStr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
