#include "FibonacciNum/fibonacciNum.h"
#include "gtest/gtest.h"

using namespace std;

class fibonacciNum_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(fibonacciNum_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,fibonacciNum::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    FibonacciNumTests,
    fibonacciNum_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
