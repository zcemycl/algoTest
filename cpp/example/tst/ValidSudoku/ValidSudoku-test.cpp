#include "ValidSudoku/validSudoku.h"
#include "gtest/gtest.h"

using namespace std;

class validSudoku_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(validSudoku_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,validSudoku::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ValidSudokuTests,
    validSudoku_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
