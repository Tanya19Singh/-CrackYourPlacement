#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
    int n=nums.size(), l=0,h=n-1;
  while(l<=h)
  {int m=(l+h)/2;
      if(nums[m]==target)
      return m;
      if(nums[l]<=nums[m])
      {if(nums[l]<=target && nums[m]>target)
      h=m-1;
      else
      l=m+1;
      }
      else{
        if(nums[m]<target && nums[h]>=target)
    l=m+1;
      else
      h=m-1;  
      }


  }
  return -1;
}

    
};