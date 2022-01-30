#include "RearrangeSpacesBetweenWords/rearrangeSpacesBetweenWords.h"
#include "gtest/gtest.h"

using namespace std;

class rearrangeSpacesBetweenWords_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(rearrangeSpacesBetweenWords_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,rearrangeSpacesBetweenWords::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    RearrangeSpacesBetweenWordsTests,
    rearrangeSpacesBetweenWords_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
