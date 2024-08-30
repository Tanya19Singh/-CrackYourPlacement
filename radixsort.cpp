#include<bits/stdc++.h>
using namespace std;
void countsort(int n,int arr[],int i)
{
    vector<int>count(10,0);
    for(int j=0;j<n;j++)
    {
        count[(arr[j]/i)%10]++;
    }
    for(int j=0;j<10;j++)
    {
        if(j>0)
        count[j]+=count[j-1];
    }
    vector<int>b(n);
    for(int j=n-1;j>=0;j--)
    {
       b[--count[(arr[j]/i)%10]]=arr[j]; 
    }
    for(int j=0;j<n;j++)
    {
        arr[j]=b[j];
    }
    
}
void radixSort(int arr[], int n) 
{ 
   // code here
   int maxe=INT_MIN;
   for(int i=0;i<n;i++)
   {
       maxe=max(maxe,arr[i]);
   }
   for(int i=1;maxe/i>0;i*=10)
   {
       countsort(n,arr,i);
   }
} 