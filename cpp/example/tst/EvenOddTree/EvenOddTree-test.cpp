#include "EvenOddTree/evenOddTree.h"
#include "gtest/gtest.h"

using namespace std;

class evenOddTree_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(evenOddTree_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,evenOddTree::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    EvenOddTreeTests,
    evenOddTree_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
