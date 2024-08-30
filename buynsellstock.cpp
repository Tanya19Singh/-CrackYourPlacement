#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
      int mine=INT_MAX;
      int maxprofit=0;  
      for(int i=0;i<prices.size();i++)
        {
            mine=min(mine,prices[i]);
            maxprofit=max(maxprofit,prices[i]-mine);
        }
        return maxprofit;
    }
};