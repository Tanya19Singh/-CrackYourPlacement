#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   int removeDuplicates(vector<int>& nums) {

        // code here
        
        int l=0,r=0,s=nums.size();
        while(r<s)
        {
            if(nums[l]==nums[r])
            r++;
            else
            {
                l++;
                swap(nums[l],nums[r]);
                r++;
            }
        }

    return l+1;
    }
};