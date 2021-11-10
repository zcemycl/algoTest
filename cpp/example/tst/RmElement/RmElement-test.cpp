#include "RmElement/rmElement.h"
#include "gtest/gtest.h"

using namespace std;

class rmElement_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int,int>>{
};

TEST_P(rmElement_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    int val = get<1>(GetParam());
    int expected = get<2>(GetParam());
    ASSERT_EQ(expected,rmElement::naive(nums,val));
};

INSTANTIATE_TEST_CASE_P(
    RmElementTests,
    rmElement_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int> {3,2,2,3},3,2),
        make_tuple(vector<int> {},3,0),
        make_tuple(vector<int> {1,2},3,2),
        make_tuple(vector<int> {0,1,2,2,3,0,4,2},2,5)
    )
);
