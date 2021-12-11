#include "AlienDict/alienDict.h"
#include "gtest/gtest.h"

using namespace std;

class alienDict_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(alienDict_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,alienDict::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    AlienDictTests,
    alienDict_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
