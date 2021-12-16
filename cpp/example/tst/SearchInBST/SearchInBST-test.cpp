#include "SearchInBST/searchInBST.h"
#include "gtest/gtest.h"

using namespace std;

class searchInBST_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(searchInBST_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,searchInBST::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    SearchInBSTTests,
    searchInBST_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
