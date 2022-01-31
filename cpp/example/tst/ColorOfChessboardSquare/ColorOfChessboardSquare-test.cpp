#include "ColorOfChessboardSquare/colorOfChessboardSquare.h"
#include "gtest/gtest.h"

using namespace std;

class colorOfChessboardSquare_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(colorOfChessboardSquare_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,colorOfChessboardSquare::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ColorOfChessboardSquareTests,
    colorOfChessboardSquare_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
