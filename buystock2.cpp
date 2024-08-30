
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mine=0,s=prices.size(),ans=0;
       for(int i=0;i<s;i++)
       {
        if(prices[mine]>prices[i])
       { mine=i;
        continue;}
        ans+=prices[i]-prices[mine];
        mine=i;
       } 
       return ans;
    }
};