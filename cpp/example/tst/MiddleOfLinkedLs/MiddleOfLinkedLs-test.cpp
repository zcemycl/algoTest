#include "MiddleOfLinkedLs/middleOfLinkedLs.h"
#include "gtest/gtest.h"

using namespace std;

class middleOfLinkedLs_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(middleOfLinkedLs_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,middleOfLinkedLs::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MiddleOfLinkedLsTests,
    middleOfLinkedLs_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
