#include "ConvertBST2GreaterTree/convertBST2GreaterTree.h"
#include "gtest/gtest.h"

using namespace std;

class convertBST2GreaterTree_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(convertBST2GreaterTree_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,convertBST2GreaterTree::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ConvertBST2GreaterTreeTests,
    convertBST2GreaterTree_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
