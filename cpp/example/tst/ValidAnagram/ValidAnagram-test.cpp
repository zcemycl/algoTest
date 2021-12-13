#include "ValidAnagram/validAnagram.h"
#include "gtest/gtest.h"

using namespace std;

class validAnagram_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(validAnagram_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,validAnagram::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ValidAnagramTests,
    validAnagram_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
