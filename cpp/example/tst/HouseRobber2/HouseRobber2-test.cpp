#include "HouseRobber2/houseRobber2.h"
#include "gtest/gtest.h"

using namespace std;

class houseRobber2_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(houseRobber2_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,houseRobber2::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    HouseRobber2Tests,
    houseRobber2_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
