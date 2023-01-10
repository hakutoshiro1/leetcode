#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> check;
        vector<vector<int>> ans;
        for (int i=0;i<points.size();i++)
        {
            int x=points[i][0],y=points[i][1];
            check.push(pair(-(x*x+y*y),pair(points[i][0],points[i][1])));
        }
        for(int i=0;i<k;i++)
        {
            vector <int> v;
            v.push_back(check.top().second.first);
            v.push_back(check.top().second.second);
            ans.push_back(v);
            check.pop();
        }
        return ans;
    }
};