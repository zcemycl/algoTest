#include "Graph/graph.h"
#include "gtest/gtest.h"

using namespace std;

class graph_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(graph_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,graph::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    GraphTests,
    graph_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
