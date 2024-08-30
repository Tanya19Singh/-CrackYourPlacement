#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int>v,int mid,int cows)
{
    int ct=1,last=v[0];
    for(int i=1;i<v.size();i++)
    {
        if(v[i]-last>=mid)
        {
            last=v[i];
            ct++;
        }
        else
        {
           continue;
        }
    }
if(ct<cows)
return false;
return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        vector<int>v(n);
        int left=INT_MAX,right=INT_MIN,res;
        for(auto &it:v)
        {   
            cin>>it;
            if(left>it)
            left=it;
            if(right<it)
            right=it;
            
        }
        right=right-left;
        left=1;
        sort(v.begin(),v.end());
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(ispossible(v,mid,c))
            {
                res=mid;
                left=mid+1;
            }
            else
            
            {
                right=mid-1;
            }
        }
    cout<< res<<endl;
    }
}