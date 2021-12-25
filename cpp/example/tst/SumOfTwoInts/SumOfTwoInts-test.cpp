#include "SumOfTwoInts/sumOfTwoInts.h"
#include "gtest/gtest.h"

using namespace std;

class sumOfTwoInts_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int,int>>{
};

TEST_P(sumOfTwoInts_MultipleParamsTests, CheckAns){
    int a = get<0>(GetParam());
    int b = get<1>(GetParam());
    int expected = get<2>(GetParam());
    ASSERT_EQ(expected,sumOfTwoInts::naive(a,b));
};

INSTANTIATE_TEST_CASE_P(
    SumOfTwoIntsTests,
    sumOfTwoInts_MultipleParamsTests,
    ::testing::Values(
        make_tuple(2,4,6),
        make_tuple(-3,-5,-8),
        make_tuple(-10,6,-4)
    )
);
