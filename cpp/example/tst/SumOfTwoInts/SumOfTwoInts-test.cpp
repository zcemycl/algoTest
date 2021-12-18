#include "SumOfTwoInts/sumOfTwoInts.h"
#include "gtest/gtest.h"

using namespace std;

class sumOfTwoInts_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(sumOfTwoInts_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,sumOfTwoInts::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    SumOfTwoIntsTests,
    sumOfTwoInts_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
