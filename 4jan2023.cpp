#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> count;
        int ans=0;
        for(auto x:tasks)
        {
            count[x]++;
        }
        for(auto x:count)
        {
            if(x<2)return -1;
            else if(x%3==0) ans+=x/3;
            else ans+=x/3+1;
        }
        return ans;
    }
};