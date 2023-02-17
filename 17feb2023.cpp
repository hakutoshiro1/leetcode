#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> v;
    void inorder(TreeNode *p)
    {
        if(!p)return ;
        inorder(p->left);
        v.push_back(p->val);
        inorder(p->right);
        return ;
    }
    int minDiffInBST(TreeNode* root) {
        int ans=INT_MAX;
        inorder(root);
        for(int i=1;i<v.size();i++)
        {
            ans=min(ans,v[i]-v[i-1]);
        }
    return ans;
    }
};