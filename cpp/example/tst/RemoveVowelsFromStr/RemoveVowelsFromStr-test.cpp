#include "RemoveVowelsFromStr/removeVowelsFromStr.h"
#include "gtest/gtest.h"

using namespace std;

class removeVowelsFromStr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<string,string>>{
};

TEST_P(removeVowelsFromStr_MultipleParamsTests, CheckAns){
    string s = get<0>(GetParam());
    string expected = get<1>(GetParam());
    ASSERT_EQ(expected,removeVowelsFromStr::naive(s));
};

INSTANTIATE_TEST_CASE_P(
    RemoveVowelsFromStrTests,
    removeVowelsFromStr_MultipleParamsTests,
    ::testing::Values(
        make_tuple("aeiou",""),
        make_tuple("leetcodeisacommunityforcoders","ltcdscmmntyfrcdrs")
    )
);
