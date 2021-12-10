#include "NumOfConnectedComponentsInUndirectedGraph/numOfConnectedComponentsInUndirectedGraph.h"
#include "gtest/gtest.h"

using namespace std;

class numOfConnectedComponentsInUndirectedGraph_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(numOfConnectedComponentsInUndirectedGraph_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,numOfConnectedComponentsInUndirectedGraph::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    NumOfConnectedComponentsInUndirectedGraphTests,
    numOfConnectedComponentsInUndirectedGraph_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
