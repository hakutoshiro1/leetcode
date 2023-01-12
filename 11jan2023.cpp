#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int c1=0,c2=0;
    bool dfs(vector <int> graph[],int i,vector<bool> hasApple,vector<int> visited)
    {
        if(visited[i])return flag;
        visited[i]=1;
        if(graph[i].size()==1)c1++;
        if(hasApple[i])flag=true;
        for(auto x:graph[i])
            {
                if(visited[x])continue;
                c1++;
                flag=flag || dfs(graph,x,hasApple,visited);
            }
            if(!flag)c1--;
            else c1++;
        return flag;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector <int> visited1(n,0);
        vector<int>visited2(n,0);
        vector <int> graph[n];
        queue<int> bfstraversal;
        for(int i=0;i<edges.size();i++)
        {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        dfs(graph,0,hasApple,visited1);
        return c1;
    }
};
