#include "NumOfIslands/numOfIslands.h"
#include "gtest/gtest.h"

using namespace std;

class numOfIslands_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(numOfIslands_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,numOfIslands::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    NumOfIslandsTests,
    numOfIslands_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
