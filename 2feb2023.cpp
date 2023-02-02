#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int> r;
        for(int i=0;i<order.size();i++)
        {
            r[order[i]]=i;
        }
        for(int i=1;i<words.size();i++)
        {
            int n=min(words[i].size(),words[i-1].size());
            int j;
            for( j=0;j<n;j++)
            {
                if(r[words[i-1][j]]<r[words[i][j]])break;
                else if(r[words[i-1][j]]>r[words[i][j]])return false;
            }
            if(words[i].size()<words[i-1].size()&&j==n)return false;
        }
        return true;
    }
};