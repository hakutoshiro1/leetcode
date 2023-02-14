#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int n=max(a.size(),b.size())-min(a.size(),b.size());
        string ans="";
        char carry='0';
        if(a.size()>b.size())
        {
            for (int i=0;i<n;i++)
            {
                b="0"+b;
            }
        }
        else
        for (int i=0;i<n;i++)
        {
            a="0"+a;
        }
        n=a.size();
        cout<<a<<" "<<b<<endl;
        for(int i=n;i>=0;i--)
        {
            string x="";
            x+=a[i];
            x+=b[i];
            x+=carry;
            cout<<x<<endl;
            if(x=="000")ans="0"+ans;
            else if(x=="001") 
            {
                ans="1"+ans;
                carry='0';
            }
            else if(x=="010")  ans="1"+ans;
            else if(x=="011")  ans="0"+ans;
            else if(x=="100")  ans="1"+ans;
            else if(x=="101")  ans="0"+ans;
            else if(x=="110")  
            {
                ans="0"+ans;
                carry='1';
            }
            else if(x=="111")  ans="1"+ans;
        }
        if(carry=='1') ans="1"+ans;
        return ans;
    }
};