#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(!intervals.size())
        {
            intervals.push_back(newInterval);
            return intervals;
        }
        vector<vector <int>> ans;
        for(int i=0;i<intervals.size();i++)
        {
            while(i<intervals.size()&&intervals[i][1]<newInterval[0])
            {
                // cout<<intervals[i][1]<<" "<<newInterval[0]<<endl;
                ans.push_back(intervals[i]);
                i++;
                // cout<<"i="<<i <<" "<<ans.size()<<endl;
            }
            if(i<intervals.size()&&intervals[i][0]<=newInterval[0]) 
            {
                // cout<<"hi"<<endl;
                ans.push_back(intervals[i]);
                while(i<intervals.size()&&intervals[i][0]<newInterval[1])i++;
                // cout<<intervals[i][0]<<" "<<newInterval[1]<<endl; 
                if(i<intervals.size()&&intervals[i][0]==newInterval[1]) ans[ans.size()-1][1]=intervals[i][1];
                else 
                {
                    ans[ans.size()-1][1]=max(newInterval[1],intervals[i-1][1]);
                    i--;
                }
                i++;
            }
            else
            {
                ans.push_back(newInterval);
                while(i<intervals.size()&&intervals[i][1]<newInterval[1])i++;
                if(i<intervals.size()&&intervals[i][0]<=newInterval[1]) ans[ans.size()-1][1]=max(newInterval[1],intervals[i][1]);
                else 
                {
                    ans[ans.size()-1][1]=newInterval[1];
                    i--;
                }
                i++;
            }
            
            while(i<intervals.size())
            {
                ans.push_back(intervals[i]);
                i++;
            }
        }
        return ans;
    }
};