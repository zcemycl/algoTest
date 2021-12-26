#include "BinaryTreePostorderTraversal/binaryTreePostorderTraversal.h"
#include "gtest/gtest.h"

using namespace std;

class binaryTreePostorderTraversal_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<string>,vector<int>>>{
};

TEST_P(binaryTreePostorderTraversal_MultipleParamsTests, CheckAns){
    vector<string> nums = get<0>(GetParam());
    TreeNode* root = TreeNode::treeNode_fromList2(nums);
    vector<int> expected = get<1>(GetParam());
    binaryTreePostorderTraversal soln;
    ASSERT_EQ(expected,soln.naive(root));
};

INSTANTIATE_TEST_CASE_P(
    BinaryTreePostorderTraversalTests,
    binaryTreePostorderTraversal_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<string>{"1","None","2","3"},vector<int>{3,2,1}),
        make_tuple(vector<string>{"1"},vector<int>{1}),
        make_tuple(vector<string>{},vector<int>{})
    )
);
