#include "ContainerWithMostH2O/containerWithMostH2O.h"
#include "gtest/gtest.h"

using namespace std;

class containerWithMostH2O_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int>>{
};

TEST_P(containerWithMostH2O_MultipleParamsTests, CheckAns){
    vector<int> height = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,containerWithMostH2O::naive(height));
};

INSTANTIATE_TEST_CASE_P(
    ContainerWithMostH2OTests,
    containerWithMostH2O_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{1,8,6,2,5,4,8,3,7},49),
        make_tuple(vector<int>{1,1},1),
        make_tuple(vector<int>{1,2,1},2),
        make_tuple(vector<int>{1,4,1,1,1,3},12),
        make_tuple(vector<int>{2,3,4,5,18,17,6},17)
    )
);
