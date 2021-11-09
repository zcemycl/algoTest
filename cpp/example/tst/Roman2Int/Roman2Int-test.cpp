#include "gtest/gtest.h"
#include "Roman2Int/roman2Int.h"

using namespace std;

class roman2Int_MultipleParamsTests : public ::testing::TestWithParam<tuple<string,int>>{
};

TEST_P(roman2Int_MultipleParamsTests, CheckAns){
    string s = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,roman2Int::naive(s));
};

INSTANTIATE_TEST_CASE_P(
    Roman2IntTests,
    roman2Int_MultipleParamsTests,
    ::testing::Values(
        make_tuple("III",3), 
        make_tuple("IV",4),
        make_tuple("IX",9),
        make_tuple("LVIII",58),
        make_tuple("MCMXCIV",1994)
    )
);
