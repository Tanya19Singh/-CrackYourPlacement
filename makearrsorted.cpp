#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1, 2, 4, 5, 3};
    int n=v.size(),i=0;
    while(i<n-1&&v[i]<v[i+1])
    {
        i++;
    }
    int t=i;
    while(i<n-1&&v[i]>v[i+1])
    {
        i++;
    }
    int f=0;
    sort(v.begin()+t+1,v.begin()+i);
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        {f=1;
        break;}
    }
    if(f==1)
    cout<<"no";
    else
    cout<<"yes";
}

