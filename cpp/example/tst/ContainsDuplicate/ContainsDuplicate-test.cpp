#include "ContainsDuplicate/containsDuplicate.h"
#include "gtest/gtest.h"

using namespace std;

class containsDuplicate_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(containsDuplicate_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,containsDuplicate::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ContainsDuplicateTests,
    containsDuplicate_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
