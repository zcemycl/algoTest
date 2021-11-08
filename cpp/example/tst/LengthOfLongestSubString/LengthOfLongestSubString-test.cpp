#include "gtest/gtest.h"
#include "LengthOfLongestSubString/lengthOfLongestSubString.h"
#include <string>

using namespace std;

/*
https://www.sandordargo.com/blog/2019/04/24/parameterized-testing-with-gtest
*/

class lengthOfLongestSubString_MultipleParamsTests : public ::testing::TestWithParam<tuple<string,int>>{
};

TEST_P(lengthOfLongestSubString_MultipleParamsTests, CheckAns){
    string s = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,lengthOfLongestSubString::naive(s));
};

INSTANTIATE_TEST_CASE_P(
    LengthOfLongestSubStringTests,
    lengthOfLongestSubString_MultipleParamsTests,
    ::testing::Values(
        make_tuple("",0), 
        make_tuple("bbbbb",1),
        make_tuple("dvdf",3),
        make_tuple("abcabcbb",3),
        make_tuple(" ",1),
        make_tuple("pwwkew",3)
    )
);
