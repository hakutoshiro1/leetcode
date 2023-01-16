// Not complete
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int count=0;
    int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
        count+=vals.size();
        vector<int> grap[count];
        for(int i=0;i<edges.size();i++)
        {
            grap[edges[i][0]].push_back(edges[i][1]);
            grap[edges[i][1]].push_back(edges[i][0]);
        }
        dfs(grap,0,-1,vals);
        return count;
    }
    int dfs(vector<int>grap[],int node,int parent,vector<int> &vals)
    {
        int maxi=vals[node];
        map<int,int> possibility;
        for(auto x:grap[node])
        {
            if(x==j)continue;

            if(possibility[vals[x]]>0&&vals[x]>=maxi)
            {
                count += possibility[x];
                maxi=vals[x];
                possibility[vals[x]]++;
            }
            else if(maxi==vals[x])
            {
                count++;
                possibility[vals[x]]++;
            }
            else if(val[x]>maxi)
            {
                maxi=vals[x];
                possibility[vals[x]]++;
            }
            dfs(grap,x,i,vals);
        }
        return maxi;
    }
};