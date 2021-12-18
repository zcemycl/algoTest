#include "ReorderList/reorderList.h"
#include "gtest/gtest.h"

using namespace std;

class reorderList_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(reorderList_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,reorderList::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ReorderListTests,
    reorderList_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
