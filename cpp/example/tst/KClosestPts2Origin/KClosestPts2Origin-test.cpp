#include "KClosestPts2Origin/kClosestPts2Origin.h"
#include "gtest/gtest.h"

using namespace std;

class kClosestPts2Origin_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(kClosestPts2Origin_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,kClosestPts2Origin::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    KClosestPts2OriginTests,
    kClosestPts2Origin_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
