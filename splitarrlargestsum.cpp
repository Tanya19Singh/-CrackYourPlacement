#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool possible(vector<int> arr,int val,int  m)
{
    int ct=1,s=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        
        if(s+arr[i]<=val)
        {
            s+=arr[i];

        }
        else
       { s=arr[i];
        ct++;}
    }
    return ct<=m;
}
    int splitArray(vector<int>& nums, int k) {
int l=*min_element(nums.begin(),nums.end()),h=accumulate(nums.begin(),nums.end(),0);
while(l<=h)
{
    int mid=(l+h)/2;
    if(possible(nums,mid,k))
    h=mid-1;
    else
    l=mid+1;
}

return l;
    


    }};