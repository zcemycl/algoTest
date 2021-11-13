#include "Add2IntArr/add2IntArr.h"
#include "gtest/gtest.h"

using namespace std;

class add2IntArr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int,vector<int>>>{
};

TEST_P(add2IntArr_MultipleParamsTests, CheckAns){
    vector<int> num = get<0>(GetParam());
    int k = get<1>(GetParam());
    vector<int> expected = get<2>(GetParam());
    ASSERT_EQ(expected,add2IntArr::naive(num,k));
};

INSTANTIATE_TEST_CASE_P(
    Add2IntArrTests,
    add2IntArr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{1,2,0,0},34,vector<int>{1,2,3,4}),
        make_tuple(vector<int>{2,7,4},181,vector<int>{4,5,5}),
        make_tuple(vector<int>{2,1,5},806,vector<int>{1,0,2,1}),
        make_tuple(vector<int>{9,9,9,9},1,vector<int>{1,0,0,0,0}),
        make_tuple(vector<int>{0},34,vector<int>{3,4})
    )
);
