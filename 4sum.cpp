#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    for(int i=0;i<(int)nums.size()-3;i++)
    {if(i>0 && nums[i]==nums[i-1])
    continue;
        for(int j1=i+1;j1<(int)nums.size();j1++){
            if(j1>i+1 && nums[j1]==nums[j1-1])
    continue;
        int j2=j1+1;
        int k=nums.size()-1;
        while(j2<k)
        {
            long long sum=1LL*nums[i]+nums[j1]+nums[j2]+nums[k];
            if(sum>target)
            k--;
            else if(sum<target)
            {j2++;
            }
            else
            {
                vector<int>temp={nums[i],nums[j1],nums[j2],nums[k]};
                ans.push_back(temp);
                while(j2<k&& nums[j2]==nums[j2+1])
                j2++;
                while(j2<k && nums[k]==nums[k-1])
                k--;
                j2++;k--;
            }
        }}
    }
    return ans;
    }
};