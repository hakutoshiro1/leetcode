#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> check(n,0);
        // for(int i=0;i<n;i++)cout<<check[i]<<endl;
        map <int,int>count;
        for(int i=0;i<trust.size();i++)
        {
            if(check[trust[i][0]-1]==0)check[trust[i][0]-1]=-1;
            count[trust[i][1]-1]++;
            // cout<<count[trust[i][1]-1]<<endl;
        }
        for(int i=0;i<n;i++)
        {
            // cout<<check[i]<<" "<<count[i]<<endl;
            if(!check[i]&&count[i]==n-1)return i+1;
        }
        return -1;
    }
};