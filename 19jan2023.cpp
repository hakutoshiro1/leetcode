#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> presum(nums.size());
        map<int,int> remmap;
        int ans=0;
        for(int i=1;i<nums.size();i++)
        {
            presum[i]+=presum[i-1];
        }      
        remmap[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            int x;
            x=presum%k;
            if(x<0)x+=k;
            remmap[x]++;
            ans+=remmap[x];
        }
        return ans;
    }
};