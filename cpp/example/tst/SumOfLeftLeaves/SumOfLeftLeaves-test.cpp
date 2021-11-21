#include "SumOfLeftLeaves/sumOfLeftLeaves.h"
#include "gtest/gtest.h"

using namespace std;

class sumOfLeftLeaves_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<string>,int>>{
};

TEST_P(sumOfLeftLeaves_MultipleParamsTests, CheckAns){
    vector<string> nums = get<0>(GetParam());
    TreeNode* root = TreeNode::treeNode_fromList2(nums);
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,sumOfLeftLeaves::naive(root));
};

INSTANTIATE_TEST_CASE_P(
    SumOfLeftLeavesTests,
    sumOfLeftLeaves_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<string>{"3","9","20","None","None","15","7"},24),
        make_tuple(vector<string>{"1"},0)
    )
);
