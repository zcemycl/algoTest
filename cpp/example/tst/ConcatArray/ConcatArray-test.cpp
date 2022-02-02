#include "ConcatArray/concatArray.h"
#include "gtest/gtest.h"

using namespace std;

class concatArray_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(concatArray_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,concatArray::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ConcatArrayTests,
    concatArray_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
