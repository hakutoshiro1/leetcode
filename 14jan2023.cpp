#include <bits/stdc++.h>
using namespaca std;
class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        string a[]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
        int b[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
        string c="abcdefghijklmnopqrstuvwxyz";
        for (int i=0;i<s1.size();i++)
        {
            int p,q;   
            p=s2[i]-'a';
            q=s1[i]-'a';
            while(p!=b[p]) p=b[p];
            while(q!=b[q]) q=b[q];
            if(q<p)
            {
                int temp=p;
                p=q;
                q=temp;
            }
            if(p!=q)
            {
                a[p]+=a[q];
                a[q]="1";
                b[q]=p;
            }
        }
        for(int i=0;i<baseStr.size();i++)
        {
            int p=baseStr[i]-'a';
            while(p!=b[p])p=b[p];
            baseStr[i]=c[p];
        }
        return baseStr;
    }
};