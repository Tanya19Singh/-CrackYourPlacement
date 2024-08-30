#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void merge(vector<int>&a,int l,int h)
{vector<int>temp;
    int mid=(l+h)/2;
    int left=l,right=mid+1;
    while(left<=mid&&right<=h)
    {
        if(a[left]<=a[right])
        {temp.push_back(a[left]);
        left++;}
        else
        {
           
            temp.push_back(a[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while(right<=h)
    {
        temp.push_back(a[right]);
        right++;
    }
    for(int i=l;i<=h;i++)
    a[i]=temp[i-l];
  
}
int count(vector<int>&a ,int l,int h)
{
    int mid=(l+h)/2,ct=0;
    int left=l,right=mid+1;
    while(left<=mid)
    {
        while( right<=h && a[left]>(a[right]*1LL*2) )
        right++;
ct+=right-mid-1;left++;
    }
    return ct;
}
int merges(vector<int>& a,int low,int high)
{int ct=0;
    if(low>=high)
    return ct;
    int mid=(low+high)/2;
    ct+=merges(a,  low, mid);
    ct+=merges(a,  mid+1, high);
ct+=count(a,low,high);
merge(a,low,high);
return ct;
}

    int reversePairs(vector<int>& nums) {
        return merges(nums,0,nums.size()-1);
    }
};