#include "DuplicateZeros/duplicateZeros.h"
#include "gtest/gtest.h"

using namespace std;

class duplicateZeros_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(duplicateZeros_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,duplicateZeros::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    DuplicateZerosTests,
    duplicateZeros_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
