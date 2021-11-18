#include "ClimbingStairs/climbingStairs.h"
#include "gtest/gtest.h"

using namespace std;

class climbingStairs_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(climbingStairs_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,climbingStairs::naive(n));
    ASSERT_EQ(expected,climbingStairs::dp(n));
    ASSERT_EQ(expected,climbingStairs::formula(n));
};

INSTANTIATE_TEST_CASE_P(
    ClimbingStairsTests,
    climbingStairs_MultipleParamsTests,
    ::testing::Values(
        make_tuple(2,2),make_tuple(3,3),make_tuple(4,5),make_tuple(5,8)
    )
);
