#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int>tracer;
    int dfs(vector <int> tracer,vector<int> grap[],int node,int i)
    {
        int ans=-1;
        for(auto x:grap[node])
        {
                if(tracer[x]==1 && i==1)return -1;
                else if(tracer[x]==1 && i==2)return x;
                else if(tracer[x]==2 && i==1 )return x;
                else if(tracer[x]==2)return -1;
                
                
                if(i==1)tracer[x]=1;
                else tracer[x]=2;

                ans=dfs(tracer,grap,x,i);
        }  
        return ans;
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n=edges.size(),ans=-1;
        tracer.resize(n,0);
        vector <int>grap[n];
        for(int i=0;i<n;i++)
        {
            if(edges[i]!=-1)
            grap[i].push_back(edges[i]);
        }
        tracer[node1] =1;
        tracer[node2]=2;
        
        
        ans=dfs(tracer,grap,node1,1);
        if(ans!=-1)ans=min(ans,dfs(tracer,grap,node2,2));
        else ans=dfs(tracer,grap,node2,2);

        return ans;
    }
};