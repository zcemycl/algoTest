#include "FindLeavesBT/findLeavesBT.h"
#include "gtest/gtest.h"

using namespace std;

class findLeavesBT_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(findLeavesBT_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,findLeavesBT::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    FindLeavesBTTests,
    findLeavesBT_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
