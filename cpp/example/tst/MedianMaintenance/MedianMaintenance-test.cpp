#include "MedianMaintenance/medianMaintenance.h"
#include "gtest/gtest.h"

using namespace std;

class medianMaintenance_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(medianMaintenance_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,medianMaintenance::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MedianMaintenanceTests,
    medianMaintenance_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
