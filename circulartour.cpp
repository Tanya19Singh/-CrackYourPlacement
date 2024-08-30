#include<bits/stdc++.h>
using namespace std;
struct petrolPump
{
    int petrol;
    int distance;
};
int tour(petrolPump p[],int n)
    {
       //Your code here
       int deficit=0,surplus=0,ans=0;
       for(int i=0;i<n;i++)
       {
          if((surplus+p[i].petrol)>=p[i].distance)
          {
              surplus=surplus+p[i].petrol-p[i].distance;
          }
          else
          {deficit+=surplus+p[i].petrol-p[i].distance;
              surplus=0;
              ans=i+1;
          }
       }
     if(surplus>=-deficit)
     return ans;
     return -1;
    }