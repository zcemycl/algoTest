#include "SortList/sortList.h"
#include "gtest/gtest.h"

using namespace std;

class sortList_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(sortList_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,sortList::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    SortListTests,
    sortList_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
