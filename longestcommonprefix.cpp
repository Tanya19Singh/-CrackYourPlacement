#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int i=0,n=strs.size(),m=min(strs[0].size(),strs[n-1].size());
        while(i<m)
        {
            if(strs[0][i]!=strs[n-1][i])
            break;
            i++;
        }
        return strs[0].substr(0,i);
    }
};