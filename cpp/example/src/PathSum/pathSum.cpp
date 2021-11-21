#include "pathSum.h"

bool pathSum::naive(TreeNode* root,int targetSum){
    if (root == nullptr) return false;
    if (root->left == nullptr && root->right == nullptr)
        return root->val == targetSum;
    bool result = false;
    if (root->left != nullptr && pathSum::naive(root->left,targetSum-root->val))
        result = true;
    if (root->right != nullptr && pathSum::naive(root->right,targetSum-root->val))
        result = true;
    return result;
}
