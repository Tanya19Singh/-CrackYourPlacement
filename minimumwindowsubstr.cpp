#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>m;
        for(auto it:t)
        m[it]++;
        int ct=0,l=0,r=0,minval=INT_MAX,st=-1;
        while(r<s.size())
        {
            if(m[s[r]]>0)
            ct++;
            m[s[r]]--;
            while(ct==t.size())
            {
                m[s[l]]++;
                if(m[s[l]]>0)
                ct--;
                if(minval>r-l+1)
                {
                    st=l;
                    minval=r-l+1;
                }
                l++;
            }
            r++;
        }
        if(st==-1)
        return "";
        return s.substr(st,minval);
    }
};