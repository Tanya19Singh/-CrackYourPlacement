#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<pair<int,int>>v;
	    for(int i=0;i<nums.size();i++)
	    {
	        v.push_back({nums[i],i});
	    }
	    sort(v.begin(),v.end());
	    int i=0,ct=0;
	    while(i<nums.size())
	    {
	        if(v[i].second!=i)
	        {
	            ct++;
	            swap(v[i],v[v[i].second]);
	            if(v[i].second==i)
	            i++;
	        }
	        else
	        i++;
	    }
	    return ct;
	}
};