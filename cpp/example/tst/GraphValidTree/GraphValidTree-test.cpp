#include "GraphValidTree/graphValidTree.h"
#include "gtest/gtest.h"

using namespace std;

class graphValidTree_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(graphValidTree_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,graphValidTree::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    GraphValidTreeTests,
    graphValidTree_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
