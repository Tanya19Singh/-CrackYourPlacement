#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void merge(vector<pair<int,int>>&nums,vector<int>&count,int left,int right)
{
    int mid=(left+right)/2;
    vector<pair<int,int>>temp(right-left+1);
    int i=left,j=mid+1,k=0;
    while(i<=mid&&j<=right)
    {
        if(nums[i].first<=nums[j].first)
        {
            temp[k++]=nums[j++];
        }
        else
        {
            count[nums[i].second]+=right-j+1;
            temp[k++]=nums[i++];
        }

    }
    while(i<=mid)
    {
        temp[k++]=nums[i++];
    }
    while(j<=right)
    {
        temp[k++]=nums[j++];
    }
    for(int i=0;i<right-left+1;i++)
    {
        nums[left+i]=temp[i];
    }
}
void mergesort(vector<pair<int,int>>&nums,vector<int>&count,int left,int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        mergesort(nums,count,left,mid);
        mergesort(nums,count,mid+1,right);
        merge(nums,count,left,right);

    }
}
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<int>count(n,0);
        vector<pair<int,int>>vi(n);
        for(int i=0;i<n;i++)
        {
            vi[i]={nums[i],i};
        }
        mergesort(vi,count,0,n-1);
        return count;
    }
};