#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    map <char,int> dfs(vector<int> grap[],int i,string labels,vector <int> &ans)
    {
        map<char , int> a,b;
        a[labels[i]]++;
        for(auto x:grap[i])
        {
            a[labels[i]]++;
            b=dfs(grap,x,labels,ans);
        }
        ans[i]=map[labels[i]]+b[labels[i]];
        return b;
    } 
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<int> grap[n],ans(n,1);
        for(int i=0;i<n-1;i++)
        {
            grap[edges[i][0]].push_back(edges[i][1]);
            grap[edges[i][1]].push_back(edges[i][0]);
        }
        dfs(grap,0,labels,ans);
        return ans;
    }
};