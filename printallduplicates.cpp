#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    unordered_map<char,int>m;
    for(auto it:s)
    {
        m[it]++;
    }
    for(auto i:m)
    {
        if(i.second>1)
        cout<<i.first<<": "<<i.second<<endl;}


}