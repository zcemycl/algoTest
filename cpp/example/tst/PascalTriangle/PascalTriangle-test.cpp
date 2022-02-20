#include "PascalTriangle/pascalTriangle.h"
#include "gtest/gtest.h"

using namespace std;

class pascalTriangle_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(pascalTriangle_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,pascalTriangle::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    PascalTriangleTests,
    pascalTriangle_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
