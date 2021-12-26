#include "binaryTreePreorderTraversal.h"

void binaryTreePreorderTraversal::recursive(TreeNode* tree){
    if (tree==nullptr) return;
    this->res.push_back(tree->val);
    recursive(tree->left);
    recursive(tree->right);
};

vector<int> binaryTreePreorderTraversal::naive(TreeNode* root){
    recursive(root);
    return this->res;    
};
