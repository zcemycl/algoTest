#include "BinaryTreePreorderTraversal/binaryTreePreorderTraversal.h"
#include "gtest/gtest.h"

using namespace std;

class binaryTreePreorderTraversal_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<string>,vector<int>>>{
};

TEST_P(binaryTreePreorderTraversal_MultipleParamsTests, CheckAns){
    vector<string> nums = get<0>(GetParam());
    TreeNode* root = TreeNode::treeNode_fromList2(nums);
    vector<int> expected = get<1>(GetParam());
    binaryTreePreorderTraversal soln;
    ASSERT_EQ(expected,soln.naive(root));
};

INSTANTIATE_TEST_CASE_P(
    BinaryTreePreorderTraversalTests,
    binaryTreePreorderTraversal_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<string>{"1","None","2","3"},vector<int>{1,2,3}),
        make_tuple(vector<string>{"1"},vector<int>{1}),
        make_tuple(vector<string>{},vector<int>{})
    )
);
