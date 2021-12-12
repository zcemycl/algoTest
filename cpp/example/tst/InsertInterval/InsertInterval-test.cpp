#include "InsertInterval/insertInterval.h"
#include "gtest/gtest.h"

using namespace std;

class insertInterval_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(insertInterval_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,insertInterval::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    InsertIntervalTests,
    insertInterval_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
