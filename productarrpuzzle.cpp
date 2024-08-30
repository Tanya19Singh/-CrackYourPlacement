#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        vector<long long int>ans;
        long long int p=1,zeroct=0;
        for(auto it:nums)
        {
            if(it==0)
            zeroct++;
            if(it!=0)
            p*=it;
        }
        
        for(auto it:nums)
        {
            
           if(zeroct==1)
           {
               if(it==0)
               ans.push_back(p);
               else
               ans.push_back(0);
           }
           else if(zeroct>1)
           ans.push_back(0);
           else
           ans.push_back(p/it);
        }
        return ans;
    }
};