#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     int subarraySum(vector<int> nums, int k) {
      int l=0,r=1,s=nums[0],c=0;
      if(nums.size()==1&&s==k)
      c++;
    while(r<nums.size())
    {
		
		if(s<k)
        s+=nums[r];
    if(s>=k)
    { 
		if(s==k)
        c++;
        s-=nums[l++];
		if(s>=k)
		r--;
		       
    }
    
	r++;
    }
	return c; }
};