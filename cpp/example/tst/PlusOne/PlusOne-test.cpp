#include "gtest/gtest.h"
#include "PlusOne/plusOne.h"

using namespace std;

class plusOne_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,vector<int>>>{
};

TEST_P(plusOne_MultipleParamsTests, CheckAns){
    vector<int> inp = get<0>(GetParam());
    vector<int> out = get<1>(GetParam());
    ASSERT_EQ(out,plusOne::naive(inp));
};

INSTANTIATE_TEST_CASE_P(
    PlusOneTests,
    plusOne_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int> {1,2,3},vector<int> {1,2,4}), 
        make_tuple(vector<int> {4,3,2,1},vector<int> {4,3,2,2}),
        make_tuple(vector<int> {0},vector<int> {1}),
        make_tuple(vector<int> {9},vector<int> {1,0})
    )
);

