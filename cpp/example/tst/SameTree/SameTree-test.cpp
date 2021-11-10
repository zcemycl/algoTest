#include "SameTree/sameTree.h"
#include "gtest/gtest.h"

using namespace std;

class sameTree_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(sameTree_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,sameTree::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    SameTreeTests,
    sameTree_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
