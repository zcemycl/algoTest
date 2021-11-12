#include "NumDifferentIntsInStr/numDifferentIntsInStr.h"
#include "gtest/gtest.h"

using namespace std;

class numDifferentIntsInStr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<string,int>>{
};

TEST_P(numDifferentIntsInStr_MultipleParamsTests, CheckAns){
    string word = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,numDifferentIntsInStr::naive(word));
};

INSTANTIATE_TEST_CASE_P(
    NumDifferentIntsInStrTests,
    numDifferentIntsInStr_MultipleParamsTests,
    ::testing::Values(
        make_tuple("a123bc34d8ef34",3),
        make_tuple("leet1234code234",2),
        make_tuple("a1b01c001",1),
        make_tuple("",0)
    )
);
