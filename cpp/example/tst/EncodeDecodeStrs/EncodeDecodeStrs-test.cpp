#include "EncodeDecodeStrs/encodeDecodeStrs.h"
#include "gtest/gtest.h"

using namespace std;

class encodeDecodeStrs_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(encodeDecodeStrs_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,encodeDecodeStrs::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    EncodeDecodeStrsTests,
    encodeDecodeStrs_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
