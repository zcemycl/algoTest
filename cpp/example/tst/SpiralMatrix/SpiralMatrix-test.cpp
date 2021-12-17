#include "SpiralMatrix/spiralMatrix.h"
#include "gtest/gtest.h"

using namespace std;

class spiralMatrix_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(spiralMatrix_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,spiralMatrix::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    SpiralMatrixTests,
    spiralMatrix_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
