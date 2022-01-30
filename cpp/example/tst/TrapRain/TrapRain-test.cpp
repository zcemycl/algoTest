#include "TrapRain/trapRain.h"
#include "gtest/gtest.h"

using namespace std;

class trapRain_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(trapRain_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,trapRain::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    TrapRainTests,
    trapRain_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
