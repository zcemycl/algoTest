#include "LongestRepeatingCharReplacement/longestRepeatingCharReplacement.h"
#include "gtest/gtest.h"

using namespace std;

class longestRepeatingCharReplacement_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(longestRepeatingCharReplacement_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,longestRepeatingCharReplacement::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    LongestRepeatingCharReplacementTests,
    longestRepeatingCharReplacement_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
