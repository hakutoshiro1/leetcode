#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)return 0;
        int ma=1,a,b;
        a=maxDepth(root->left);
        b=maxDepth(root->right);
        ma+=max(a,b);
        return ma;
    }
};