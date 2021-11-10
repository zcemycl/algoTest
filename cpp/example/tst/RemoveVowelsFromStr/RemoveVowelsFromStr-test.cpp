#include "RemoveVowelsFromStr/removeVowelsFromStr.h"
#include "gtest/gtest.h"

using namespace std;

class removeVowelsFromStr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(removeVowelsFromStr_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,removeVowelsFromStr::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    RemoveVowelsFromStrTests,
    removeVowelsFromStr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
