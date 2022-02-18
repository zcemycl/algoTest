#include "FindDuplicateSubtrees/findDuplicateSubtrees.h"
#include "gtest/gtest.h"

using namespace std;

class findDuplicateSubtrees_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(findDuplicateSubtrees_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,findDuplicateSubtrees::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    FindDuplicateSubtreesTests,
    findDuplicateSubtrees_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
