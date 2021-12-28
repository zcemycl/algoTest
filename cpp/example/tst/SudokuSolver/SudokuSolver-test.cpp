#include "SudokuSolver/sudokuSolver.h"
#include "gtest/gtest.h"

using namespace std;

class sudokuSolver_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(sudokuSolver_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,sudokuSolver::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    SudokuSolverTests,
    sudokuSolver_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
