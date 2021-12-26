#include "naryTreePreorderTraversal.h"

void naryTreePreorderTraversal::recursive(Node* tree){
    if (tree==nullptr) return;
    this->res.push_back(tree->val);
    for (auto child: tree->children)
        recursive(child);
}

vector<int> naryTreePreorderTraversal::naive(Node* root){
    recursive(root);
    return this->res;
}
