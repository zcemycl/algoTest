#include "TxtJustification/txtJustification.h"
#include "gtest/gtest.h"

using namespace std;

class txtJustification_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(txtJustification_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,txtJustification::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    TxtJustificationTests,
    txtJustification_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
