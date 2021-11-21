#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(): val(0),left(nullptr),right(nullptr){};
    TreeNode(int x): val(x),left(nullptr),right(nullptr){};
    TreeNode(int x,TreeNode *left,TreeNode *right): 
        val(x),left(left),right(right){};
    static TreeNode* treeNode_fromList(
        vector<string>& nums,TreeNode* root,int i,int n);
    static TreeNode* treeNode_fromList2(vector<string>& nums);
    static vector<string> treeNode2List(TreeNode* root);
    static void printVecStr(vector<string>& nums);
};