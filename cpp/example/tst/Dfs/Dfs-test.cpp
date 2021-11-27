#include "Dfs/dfs.h"
#include "gtest/gtest.h"

using namespace std;

class dfs_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(dfs_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,dfs::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    DfsTests,
    dfs_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
