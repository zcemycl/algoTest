#include "BfsConnectivity/bfsConnectivity.h"
#include "gtest/gtest.h"

using namespace std;

class bfsConnectivity_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(bfsConnectivity_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,bfsConnectivity::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    BfsConnectivityTests,
    bfsConnectivity_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
