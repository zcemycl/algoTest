#include "LenOfLastWord/lenOfLastWord.h"
#include "gtest/gtest.h"

using namespace std;

class lenOfLastWord_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(lenOfLastWord_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,lenOfLastWord::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    LenOfLastWordTests,
    lenOfLastWord_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
