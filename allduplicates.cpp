#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(auto &it:nums)
        {
            int x=abs(it);
            if(nums[x-1]<0)
            ans.push_back(x);
            nums[x-1]*=-1;
        }
        return ans;
    }
};