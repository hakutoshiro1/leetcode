#include <bits/stdc++.h>
using namespace std;
    class Solution {
    public:
        vector <int> dp(37,-1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        int tribonacci(int n) {
                if(dp[n]!=-1)return dp[n];
                else dp[n]=tribonacci(n);
                return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        }
    };