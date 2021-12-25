#include "JumpGame/jumpGame.h"
#include "gtest/gtest.h"

using namespace std;

class jumpGame_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(jumpGame_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,jumpGame::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    JumpGameTests,
    jumpGame_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
