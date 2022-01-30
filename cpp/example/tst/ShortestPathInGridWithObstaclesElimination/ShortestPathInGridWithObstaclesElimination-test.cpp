#include "ShortestPathInGridWithObstaclesElimination/shortestPathInGridWithObstaclesElimination.h"
#include "gtest/gtest.h"

using namespace std;

class shortestPathInGridWithObstaclesElimination_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(shortestPathInGridWithObstaclesElimination_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,shortestPathInGridWithObstaclesElimination::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ShortestPathInGridWithObstaclesEliminationTests,
    shortestPathInGridWithObstaclesElimination_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
