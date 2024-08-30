#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string RLE(string s)
    {
        string ans="";
        int n=s.size(),i,ct=0;
        for( i=0;i<n;i++)
        {
            if(i==0)
            {
                ct++;continue;
            }
            else
            {
                if(s[i]!=s[i-1])
                {
                    ans.push_back('0'+ct);
                    ans.push_back(s[i-1]);
                    ct=1;
                }
                else
                ct++;
            }
        }
        ans.push_back('0'+ct);
        ans.push_back(s[i-1]);
        return ans;
    }
    string countAndSay(int n) {
        string ctsay="1";
        for(int i=1;i<n;i++)
        {
            ctsay=RLE(ctsay);

        }
        return ctsay;
    }
};