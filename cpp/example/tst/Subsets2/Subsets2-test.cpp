#include "Subsets2/subsets2.h"
#include "gtest/gtest.h"

using namespace std;

class subsets2_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(subsets2_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,subsets2::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    Subsets2Tests,
    subsets2_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
