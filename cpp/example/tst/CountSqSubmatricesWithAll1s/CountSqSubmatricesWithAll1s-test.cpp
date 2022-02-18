#include "CountSqSubmatricesWithAll1s/countSqSubmatricesWithAll1s.h"
#include "gtest/gtest.h"

using namespace std;

class countSqSubmatricesWithAll1s_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(countSqSubmatricesWithAll1s_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,countSqSubmatricesWithAll1s::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    CountSqSubmatricesWithAll1sTests,
    countSqSubmatricesWithAll1s_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
