#include "BinaryTreeInorderTraversal/binaryTreeInorderTraversal.h"
#include "gtest/gtest.h"

using namespace std;

class binaryTreeInorderTraversal_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<string>,vector<int>>>{
};

TEST_P(binaryTreeInorderTraversal_MultipleParamsTests, CheckAns){
    vector<string> nums = get<0>(GetParam());
    TreeNode* root = TreeNode::treeNode_fromList2(nums);
    vector<int> expected = get<1>(GetParam());
    binaryTreeInorderTraversal soln;
    ASSERT_EQ(expected,soln.naive(root));
};

INSTANTIATE_TEST_CASE_P(
    BinaryTreeInorderTraversalTests,
    binaryTreeInorderTraversal_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<string>{"1","None","2","3"},vector<int>{1,3,2}),
        make_tuple(vector<string>{"1"},vector<int>{1}),
        make_tuple(vector<string>{},vector<int>{})
    )
);
