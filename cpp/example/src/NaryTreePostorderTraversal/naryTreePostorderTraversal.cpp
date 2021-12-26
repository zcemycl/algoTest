#include "naryTreePostorderTraversal.h"

void naryTreePostorderTraversal::recursive(Node* tree){
    if (tree==nullptr) return;
    for (auto child: tree->children)
        recursive(child);
    this->res.push_back(tree->val);
}

vector<int> naryTreePostorderTraversal::naive(Node* root){
    recursive(root);
    return this->res;
}
