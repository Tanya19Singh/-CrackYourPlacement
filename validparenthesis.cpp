#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
    for(auto it:s)
    {
        if(it=='('||it=='{'||it=='[')
        st.push(it);
        else {
            if(st.empty())return false;
        char t = st.top();
        if ((t == '(' && it == ')') || (t == '{' && it == '}') ||
            (t == '[' && it == ']')) {
          st.pop();
          continue;
        } else
          return false;
        }
    }
    if(st.empty())
    return true;
    return false;//if any single element remains in stack then its not valid
    }
};