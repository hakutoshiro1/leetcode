#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(),special.end());
        int c=0,j=0,max=0;
        for(int i=bottom;i<=top;i++)
        {
            while(i!=special[j])
            {
                c++;
                i++;
            }
            if(c>max)max=c;
            c=0;
        }   
        return max;   
    }
};