#include "RmElement/rmElement.h"
#include "gtest/gtest.h"

using namespace std;

class rmElement_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(rmElement_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,rmElement::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    RmElementTests,
    rmElement_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
