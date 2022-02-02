#include "WaterBottles/waterBottles.h"
#include "gtest/gtest.h"

using namespace std;

class waterBottles_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(waterBottles_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,waterBottles::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    WaterBottlesTests,
    waterBottles_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
