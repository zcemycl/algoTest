#include "binaryTreeInorderTraversal.h"

void binaryTreeInorderTraversal::recursive(TreeNode* tree){
    if (tree==nullptr) return;
    recursive(tree->left);
    this->res.push_back(tree->val);
    recursive(tree->right);
}

vector<int> binaryTreeInorderTraversal::naive(TreeNode* root){
    recursive(root);
    return this->res;
}
