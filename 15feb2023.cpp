#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i=num.size()-1,carry=0;
        while (k&&i>-1)
        {
            num[i]=num[i]+(k%10)+carry;
            k/=10;
            carry=0;
            if(num[i]>9)
            {
                num[i]-=10;
                carry=1;
            }
            i--;
        }
        while(k)
        {
            num.insert(num.begin(),(k%10)+carry);
            k/=10;
            carry=0;
            if(num[0]>9)
            {
                num[0]-=10;
                carry=1;
            }
        }
        while(carry&&i>-1)
        {
            num[i]+=carry;
            carry=0;
            if(num[i]>9)
            {
                num[i]-=10;
                carry=1;
            }
            i--;
        }
        if(carry)num.insert(num.begin(),1);
        return num;
    }
};