#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int majorityElement(vector<int>& nums) {
       int l,ct=0;
       for(auto it:nums)
       {
        if(ct==0)
        {
            ct++;
            l=it;
        }
        else if(l==it)
        ct++;
        else
        ct--;
       }
       return l;
		}
};