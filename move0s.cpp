#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
{
    int s=nums.size(),j=INT_MAX-1;
    for(int i=0;i<s;i++)
    {
        if(nums[i]==0)
        {
            j=i;break;
        }
    }
    for(int i=j+1;i<s;i++)
    {
        if(nums[i]!=0)
        {
            swap(nums[i],nums[j]);
            j++;
        }
    }

    }
};