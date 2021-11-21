#include "sumOfLeftLeaves.h"

int sumOfLeftLeaves::naive(TreeNode* root){
    int s=0;
    if (root != nullptr){
        if (root->left!=nullptr && root->left->left==nullptr && root->left->right==nullptr)
            s+=root->left->val;
        if (root->left!=nullptr && (root->left->left!=nullptr || root->left->right!=nullptr))
            s+=sumOfLeftLeaves::naive(root->left);
        if (root->right!=nullptr && (root->right->left!=nullptr || root->right->right!=nullptr))
            s+=sumOfLeftLeaves::naive(root->right);
    }
    return s;
}
