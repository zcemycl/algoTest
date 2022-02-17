#include "FindOriginalArrFromDoubledArr/findOriginalArrFromDoubledArr.h"
#include "gtest/gtest.h"

using namespace std;

class findOriginalArrFromDoubledArr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(findOriginalArrFromDoubledArr_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,findOriginalArrFromDoubledArr::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    FindOriginalArrFromDoubledArrTests,
    findOriginalArrFromDoubledArr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
