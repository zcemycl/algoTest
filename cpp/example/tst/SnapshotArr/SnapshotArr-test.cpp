#include "SnapshotArr/snapshotArr.h"
#include "gtest/gtest.h"

using namespace std;

class snapshotArr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(snapshotArr_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,snapshotArr::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    SnapshotArrTests,
    snapshotArr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
