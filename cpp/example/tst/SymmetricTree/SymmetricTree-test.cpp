#include "SymmetricTree/symmetricTree.h"
#include "gtest/gtest.h"

using namespace std;

class symmetricTree_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(symmetricTree_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,symmetricTree::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    SymmetricTreeTests,
    symmetricTree_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
