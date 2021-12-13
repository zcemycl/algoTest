#include "Permutations/permutations.h"
#include "gtest/gtest.h"

using namespace std;

class permutations_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(permutations_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,permutations::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    PermutationsTests,
    permutations_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
