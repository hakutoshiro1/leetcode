#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bs(vector <int> n,int l,int h)
    {
        if(l>h)return -1;
        int m=(l+h)/2,x;
        if(m&&n[m]!=n[m-1]&&n[m]!=n[m+1])return n[m];
        x=max(bs(n,l,m-1),bs(n,m+1,h));
        return x;
    }
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        else if(nums[0]!=nums[1])return nums[0];
        else if(nums[nums.size()-1]!=nums[nums.size()-2])return nums[nums.size()-1];
        return bs(nums,0,nums.size()-1);
    }
};