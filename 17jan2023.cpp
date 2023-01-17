#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int l=0,h=s.size()-1,left=0,right=0,ans,zero=0,one=0;
        while(l<s.size()&&s[l]=='0')l++;
        while(h>-1&&s[h]=='1')h--;
        if(l==h||l==s.size()||h==-1) return 0;
        // map<char,int> count;
        for(int i=l;i<=h;i++)
        {
            // count[s[i]]++;
            if(s[i]=='1')
            {
                left++;
                one++;
            }
            else
            zero++;
        }
        // ans=min(count['1'],count['0']);
        ans=min(one,zero);
        for(int i=h;i>=l;i--)
        {
            if(s[i]=='0')right++;
            else left--;
            if(left+right<ans)ans =left+right ;
        }
        return ans;
    }
};