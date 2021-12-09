#include "CloneGraph/cloneGraph.h"
#include "gtest/gtest.h"

using namespace std;

class cloneGraph_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(cloneGraph_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,cloneGraph::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    CloneGraphTests,
    cloneGraph_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
