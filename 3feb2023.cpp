#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    string convert(string s,int numRow)
    {
        if(numRow==1)return s;
        string ans="";
        int n=0,si;
        si=s.size();
        while(n<si&&n>=0)
        {
            ans+=s[n];
            n+=((numRow*2)-2);
        }

        for(int i=1;i<numRow-1;i++)
        {
            n=i;
            while(n<si&&n>=0)
            {
                ans+=s[n];
                n+=numRow*2-2-2*i;
                if(n<si&&n>=0)
                {
                    ans+=s[n];
                    n+=2*i;
                }
            }
        }
        
        n=numRow-1;
        while(n<si&&n>=0)
        {
            ans+=s[n];
            n+=(numRow*2-2);
        }
        return ans;
    }
};