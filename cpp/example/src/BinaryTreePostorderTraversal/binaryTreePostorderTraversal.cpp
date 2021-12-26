#include "binaryTreePostorderTraversal.h"

void binaryTreePostorderTraversal::recursive(TreeNode* tree){
    if (tree==nullptr) return;
    recursive(tree->left);
    recursive(tree->right);
    this->res.push_back(tree->val);
}

vector<int> binaryTreePostorderTraversal::naive(TreeNode* root){
    recursive(root);
    return this->res;
}
