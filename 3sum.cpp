#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<(int)nums.size()-2;i++)
        {
            int j=i+1;
            int k=(int)nums.size()-1;
if(i==0||(nums[i]!=nums[i-1]))
          {
           while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0)
                k--;
                else if(sum<0)
                j++;
                else
                {vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    while(j<k && nums[j]==nums[j+1])
                    j++;
                    while(j<k && nums[k]==nums[k-1])
                    k--;
                    j++;k--;
                }
            }  }      }
            return ans;
    }

};