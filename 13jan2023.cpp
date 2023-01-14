class Solution {
public:

    int maxPath=0;

    int longestPath(vector<int>& parent, string s) {
        vector<int>adj[s.length()];
        for(int i=1;i<parent.size();i++)
        {
            int p=parent[i];
            adj[p].push_back(i);
        }

        dfs(-1,0,adj,s);
        return maxPath+1;
    }

    int dfs(int parent,int node,vector<int>adj[],string&s)
    {
        int maxPath1=0,maxPath2=0;
        for(auto &i:adj[node])
        {
            if(i!=parent)
            {
                int pathLen=dfs(node,i,adj,s);
                if(s[i]==s[node]) pathLen=0;
                else pathLen++;

                if(pathLen>=maxPath1)
                {
                    maxPath2=maxPath1;
                    maxPath1=pathLen;
                }
                else if(pathLen>=maxPath2)
                {
                    maxPath2=pathLen;
                }
            }
        }
        maxPath=max(maxPath,maxPath1+maxPath2);
        return maxPath1;
    }
};