#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to find minimum number of pages.
    bool canallocate(int arr[],long long mid,int m,int n)
    {
        int ct=1;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>mid)
            return false;
            if((sum+arr[i])<=mid)
            {
                sum+=arr[i];
            }
            else
            {
                ct++;
                sum=arr[i];
            }
        }
        return ct<=m;
    }
    long long findPages(int n, int arr[], int m) {
        // code here
        if(n<m)
        return -1;
        long long low=INT_MAX,high=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<low)
            low=arr[i];
            high+=arr[i];
        }
        long long res;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            if(canallocate(arr,mid, m,n))
            {
                res=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        // int ct=1,sum=0;
        // for(int i=0;i<n;i++)
        // {
        //     if((sum+arr[i])<=res)
        //     {
        //         sum+=arr[i];
        //     }
        //     else
        //     {
        //         ct++;
        //         sum=arr[i];
        //     }
            
        // }
        // if(ct==m)
        // return res;
        
        return res;
    } 
    
};