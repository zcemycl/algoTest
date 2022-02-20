#include "Search2DMat/search2DMat.h"
#include "gtest/gtest.h"

using namespace std;

class search2DMat_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(search2DMat_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,search2DMat::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    Search2DMatTests,
    search2DMat_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
