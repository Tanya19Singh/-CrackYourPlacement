#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
       for(int i=0;i<n;i++)
       {
           int e=arr[i];
           if(e>=1&&e<=n)
           {
               if(arr[e-1]!=e)
               {
                   swap(arr[e-1],arr[i]);
                   i--;
               }
           }
       }
       for(int i=0;i<n;i++)
       {
           if(arr[i]!=i+1)
           return 1+i;
       }
       return n+1;
    } 
};