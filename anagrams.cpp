#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
        //code here
        unordered_map<string,vector<string>>m;
        for(auto it:string_list)
        {
            string s=it;
            sort(it.begin(),it.end());
            m[it].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto it:m)
        {
            ans.push_back(it.second);
        }
        return ans;
        
    }
};