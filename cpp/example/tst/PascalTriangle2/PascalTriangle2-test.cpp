#include "PascalTriangle2/pascalTriangle2.h"
#include "gtest/gtest.h"

using namespace std;

class pascalTriangle2_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(pascalTriangle2_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,pascalTriangle2::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    PascalTriangle2Tests,
    pascalTriangle2_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
