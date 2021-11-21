#include "sameTree.h"

bool sameTree::naive(TreeNode* a,TreeNode* b){
    if (a==nullptr && b==nullptr) return true;
    if (a==nullptr || b==nullptr) return false;
    if (a->val!=b->val) return false;
    return sameTree::naive(a->left,b->left) && sameTree::naive(a->right,b->right);
}
