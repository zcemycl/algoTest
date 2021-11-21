#include "gtest/gtest.h"
#include <TreeNode/treeNode.h>

using namespace std;

TEST(treeNodeTest, emptyconstructor){
    TreeNode* t = new TreeNode();
    EXPECT_EQ(t->val,0);
}

TEST(treeNodeTest, valconstructor){
    TreeNode* t = new TreeNode(2);
    EXPECT_EQ(t->val,2);
}

TEST(treeNodeTest, leftconstructor){
    TreeNode* t = new TreeNode(2);
    t->left = new TreeNode(1);
    EXPECT_EQ(t->val,2);
    EXPECT_EQ(t->left->val,1);
}

TEST(treeNodeTest, rightconstructor){
    TreeNode* t = new TreeNode(2);
    t->right = new TreeNode(1);
    EXPECT_EQ(t->val,2);
    EXPECT_EQ(t->right->val,1);
}

TEST(treeNodeTest, wholeconstructor){
    TreeNode* t = new TreeNode(2);
    t->left = new TreeNode(1);
    t->right = new TreeNode(3);
    EXPECT_EQ(t->val,2);
    EXPECT_EQ(t->left->val,1);
    EXPECT_EQ(t->right->val,3);
}


TEST(treeNodeTest, fromList2_test1){
    vector<string> s = {"1","2","3","4","5"};
    TreeNode* t = TreeNode::treeNode_fromList2(s);
    vector<string> expected = TreeNode::treeNode2List(t);
    EXPECT_EQ(s,expected);
}


TEST(treeNodeTest, fromList2_test2){
    vector<string> s = {"5","4","8","11","None",
        "13","4","7","2","None","None","None","1"};
    TreeNode* t = TreeNode::treeNode_fromList2(s);
    vector<string> expected = TreeNode::treeNode2List(t);
    EXPECT_EQ(s,expected);
}