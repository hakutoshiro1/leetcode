#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        priority_queue <int> order;
        int sum=0;
        for (int i=0;i<costs.size();i++)
        {
            if(sum+costs[i]<=coins)
            {
                sum+=costs[i];
                order.push(costs[i]);
            }
            else if(!order.empty()&& costs[i]<order.top())
            {
                sum+=(costs[i]-order.top());
                order.pop();
                order.push(costs[i]);
            }
        }
        return order.size()
    }
};