#include <iostream>
#include <vector>
#include <string>
#include <TreeNode/treeNode.h>

using namespace std;

class binaryTreePostorderTraversal{
    public:
        vector<int> res={};
        void recursive(TreeNode* tree);
        vector<int> naive(TreeNode* root);
};
