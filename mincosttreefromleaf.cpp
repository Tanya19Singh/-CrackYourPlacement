#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) 
    {
        stack<int>st;
        st.push(arr[0]);
        int ans=0;
        for(int i=1;i<arr.size();i++)
        {
            while(!st.empty()&&st.top()<arr[i])
            {
                int t=st.top();
                st.pop();
                if(st.empty())
                ans+=t*(arr[i]);
                else
                ans+=t*min(st.top(),arr[i]);
            }
            st.push(arr[i]);
        }   
        while(st.size()>1)
        {
            int t=st.top();
            st.pop();
            ans+=t*st.top();
        } 
        return ans;
    }
};