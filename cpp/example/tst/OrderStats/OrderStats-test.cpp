#include "OrderStats/orderStats.h"
#include "gtest/gtest.h"

using namespace std;

class orderStats_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int,string,int>>{
};

TEST_P(orderStats_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    int n = get<1>(GetParam());
    string mode = get<2>(GetParam());
    int expected = get<3>(GetParam());
    ASSERT_EQ(expected,orderStats::naive(nums,n,0,nums.size(),mode));
};

INSTANTIATE_TEST_CASE_P(
    OrderStatsTests,
    orderStats_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{7,1,5,2},3,"first",5),
        make_tuple(vector<int>{7,1,5,2},4,"first",7),
        make_tuple(vector<int>{7,1,5,2,8,10,0,11,21,15},3,"first",2),
        make_tuple(vector<int>{7,1,5,2},3,"end",5),
        make_tuple(vector<int>{7,1,5,2},4,"end",7),
        make_tuple(vector<int>{7,1,5,2,8,10,0,11,21,15},3,"end",2),
        make_tuple(vector<int>{7,1,5,2},3,"med",5),
        make_tuple(vector<int>{7,1,5,2},4,"med",7),
        make_tuple(vector<int>{7,1,5,2,8,10,0,11,21,15},3,"med",2)
    )
);
