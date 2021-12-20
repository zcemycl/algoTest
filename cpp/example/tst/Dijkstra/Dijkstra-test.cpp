#include "Dijkstra/dijkstra.h"
#include "gtest/gtest.h"

using namespace std;

class dijkstra_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(dijkstra_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,dijkstra::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    DijkstraTests,
    dijkstra_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
