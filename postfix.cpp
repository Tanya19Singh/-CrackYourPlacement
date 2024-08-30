#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>st;
        for(auto it:S)
        {
            if(it=='+'||it=='-'||it=='/'||it=='*')
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(it=='+')
                st.push(a+b);
                else if(it=='-')
                st.push(b-a);
                else if(it=='/')
                st.push(b/a);
                else if(it=='*')
                st.push(b*a);
            }
            else
            st.push(it-'0');
        }
        return st.top();
    }
};