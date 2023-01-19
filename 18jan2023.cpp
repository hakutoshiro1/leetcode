#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum,cmax,maxsf,cmin,minsf;
        sum=nums[0];
        cmax=sum;
        maxsf=sum;
        cmin=sum;
        minsf=sum;
        for(int i=1;i<nums.size();i++)
        {
            sum+=nums[i];
            cmax=max(nums[i],cmax+nums[i]);
            maxsf=max(maxsf,cmax);
            cmin=min(nums[i],cmin+nums[i]);
            minsf=min(minsf,cmin);
        }
        if(minsf==sum)return maxsf;
        else return max(maxsf,sum-minsf);
    }
};