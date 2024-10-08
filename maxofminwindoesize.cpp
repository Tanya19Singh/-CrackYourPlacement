#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
        // Your code here
        stack<int>st;
        vector<int>left(n,-1),right(n,n);
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&&arr[st.top()]>=arr[i])
            st.pop();
            if(!st.empty())left[i]=st.top();
            st.push(i);
        }
        while(!st.empty())st.pop();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty()&&arr[st.top()]>=arr[i])
            st.pop();
            if(!st.empty())right[i]=st.top();
            st.push(i);
        }
        vector<int>ans(n+1,0);
        for(int i=0;i<n;i++)
        {
            int t=right[i]-left[i]-1;
            ans[t]=max(ans[t],arr[i]);
        }
        for(int i=n-1;i>0;i--)
        {
            ans[i]=max(ans[i],ans[i+1]);
            
        }
        ans.erase(ans.begin());
        return ans;
    }
};