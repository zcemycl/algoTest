#include "HouseRobber/houseRobber.h"
#include "gtest/gtest.h"

using namespace std;

class houseRobber_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(houseRobber_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,houseRobber::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    HouseRobberTests,
    houseRobber_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
