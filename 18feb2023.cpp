#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)return root;
        TreeNode *p,*q;
        p=root->left;
        q=root->right;
        root->left=q;
        root->right=p;
        invertTree(p);
        invertTree(q);
        return root;
    }
};