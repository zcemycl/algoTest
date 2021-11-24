#include "CountMinCuts/countMinCuts.h"
#include "gtest/gtest.h"

using namespace std;

class countMinCuts_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(countMinCuts_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,countMinCuts::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    CountMinCutsTests,
    countMinCuts_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
