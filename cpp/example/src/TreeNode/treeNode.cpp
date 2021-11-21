#include "treeNode.h"

TreeNode* TreeNode::treeNode_fromList2(vector<string>& nums){
    if (nums.size()==0) return nullptr;
    queue<TreeNode**> q;
    TreeNode* result = new TreeNode(stoi(nums[0]));
    TreeNode** tmp = &result;
    q.push(tmp);
    for (int i=1;i<nums.size();i++){
        if (i%2==1){
            tmp = q.front();
            if (nums[i] != "None"){
                (*tmp)->left = new TreeNode(stoi(nums[i]));
                q.push(&((*tmp)->left));
            }             
            q.pop();
        } else {
            if (nums[i] != "None"){
                (*tmp)->right = new TreeNode(stoi(nums[i]));
                q.push(&((*tmp)->right));
            }
        }
    }
    return result;
}

vector<string> TreeNode::treeNode2List(TreeNode* root){
    queue<TreeNode*> q = {};
    TreeNode* tmp;
    q.push(root);
    vector<string> ls;
    while (q.size()!=0){
        tmp = q.front();
        if (tmp != nullptr){
            ls.push_back(to_string(tmp->val));
        } else {ls.push_back("None");}
        if (tmp != nullptr){
            q.push(tmp->left);
        }
        if (tmp != nullptr){
            q.push(tmp->right);
        }        
        q.pop();
    }
    for (int i=ls.size()-1;i>=0;i--){
        if (ls[i]=="None"){
            ls.pop_back();
        } else {break;}
    }
    return ls;
}

void TreeNode::printVecStr(vector<string>& nums){
    for (int i=0;i<nums.size();i++) 
        cout<<nums[i]<<" ";
    cout<<endl;
}