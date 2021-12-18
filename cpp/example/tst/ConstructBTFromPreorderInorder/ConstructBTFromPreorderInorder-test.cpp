#include "ConstructBTFromPreorderInorder/constructBTFromPreorderInorder.h"
#include "gtest/gtest.h"

using namespace std;

class constructBTFromPreorderInorder_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(constructBTFromPreorderInorder_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,constructBTFromPreorderInorder::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ConstructBTFromPreorderInorderTests,
    constructBTFromPreorderInorder_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
