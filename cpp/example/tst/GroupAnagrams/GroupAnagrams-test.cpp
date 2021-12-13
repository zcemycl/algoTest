#include "GroupAnagrams/groupAnagrams.h"
#include "gtest/gtest.h"

using namespace std;

class groupAnagrams_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(groupAnagrams_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,groupAnagrams::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    GroupAnagramsTests,
    groupAnagrams_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
