#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int convert(string s)
    {
        int ans=0,i=0,ss=s.size();
        if(s[0]=='-')
        i=1;
        for(;i<ss;i++)
        {
            int t=s[i]-'0';
            ans=ans*10+t;
        }
        return ans;        
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto it:tokens)
        {
            if(it=="-"||it=="/"||it=="+"||it=="*")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(it=="+")
                st.push(a+b);
                else if(it=="-")
                st.push(a-b);
                else if(it=="/")
                st.push(b/a);
                else if(it=="*")
                st.push(a*b);

            }
            else{
                st.push(convert(it));
            }

        }
        return st.top();
    }
};