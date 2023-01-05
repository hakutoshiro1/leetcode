#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int count=0;
        pair<int,int> maxi;
        maxi=pair(points[0][0],points[0][1]);
        for(int i=0;i<points.size();i++)
        {
            if((points[i][0]>=maxi.first&&points[i][0]<=maxi.second)||((points[i][1]>=maxi.first&&points[i][1]<=maxi.second)))
            maxi=pair(min(points[i][0],maxi.first),min(points[i][1],maxi.second));
            else
            {
                count++;
                maxi=pair(points[i][0],points[i][1]);
            }
        }
        return count;
    }
};