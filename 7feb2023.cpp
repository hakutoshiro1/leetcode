#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        vector<int> consecative;
        map<int,int> count;
        for(int i=0;i<fruits.size();i++)
        {
            if(!count[fruits[i]]&& i)consecative.push_back(count[fruits[i-1]]);
            count[x]++;
        }
        int max1=0,max2=0;
        for(auto x:dist)
        {
            if(count[x]>max1)
            {
                max2=max1;
                max1=dist[x];
            }
            else if(count[x]>max2)
            max2=count[x];
        }
        return max1+max2;
    }
};