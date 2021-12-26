#include <iostream>
#include <vector>
#include <TreeNode/treeNode.h>

using namespace std;

class binaryTreePreorderTraversal{
    public:
        vector<int> res={};
        void recursive(TreeNode* tree);
        vector<int> naive(TreeNode* root);
};
