#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=0,sum2=0,ans=0;
        for(int i=0;i<gas.size();i++)
        {
            sum1+=gas[i];
            sum2+=cost[i];
        }
        if(sum1<sum2)return -1;
        sum1=0;
        for(int i=0;i<gas.size();i++)
        {
            sum1+=gas[i]-cost[i];
            if(sum1<0)
            {
                ans=i+1;
                sum1=0;
            }
        }
        return ans;
    }
};