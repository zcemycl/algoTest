#include "SameTree/sameTree.h"
#include "gtest/gtest.h"

using namespace std;

class sameTree_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<string>,vector<string>,bool>>{
};

TEST_P(sameTree_MultipleParamsTests, CheckAns){
    vector<string> numsa = get<0>(GetParam());
    vector<string> numsb = get<1>(GetParam());
    TreeNode* a = TreeNode::treeNode_fromList2(numsa);
    TreeNode* b = TreeNode::treeNode_fromList2(numsb);
    bool expected = get<2>(GetParam());
    ASSERT_EQ(expected,sameTree::naive(a,b));
};

INSTANTIATE_TEST_CASE_P(
    SameTreeTests,
    sameTree_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<string>{"1","2","4"},vector<string>{"1","2","4"},true),
        make_tuple(vector<string>{"1","2"},vector<string>{"1","None","2"},false),
        make_tuple(vector<string>{"1","2","1"},vector<string>{"1","1","2"},false)
    )
);
