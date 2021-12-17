#include "SetMatrixZeros/setMatrixZeros.h"
#include "gtest/gtest.h"

using namespace std;

class setMatrixZeros_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(setMatrixZeros_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,setMatrixZeros::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    SetMatrixZerosTests,
    setMatrixZeros_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
