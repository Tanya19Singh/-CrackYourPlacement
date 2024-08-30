#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(auto it:s)
        {
            
            if(st.empty())
            st.push({it,1});
            else
            {
                if(st.top().first==it)
                st.top().second++;
                else
                st.push({it,1});

            }
            if(!st.empty()&&st.top().second==k)
            st.pop();

        }
        string ans="";
        while(!st.empty())
        {
            while(st.top().second--)
            {
                ans.push_back(st.top().first);
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};