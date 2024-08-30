#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  void permutation(vector<vector<int>>&ans,vector<int>&temp,vector<int>arr,vector<int>done,int pos)
  {
      if(pos==arr.size())
      {
          ans.push_back(temp);
          return;
      }
          unordered_set<int>s;
          for(int i=0;i<arr.size();i++)
          {
              if(s.find(arr[i])!=s.end())
              continue;
              if(find(done.begin(),done.end(),i)!=done.end())
              continue;
              temp.push_back(arr[i]);
              done.push_back(i);
              s.insert(arr[i]);
              permutation(ans,temp,arr,done,pos+1);
              temp.pop_back();
              done.pop_back();
              
          }
      
  }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        vector<vector<int>>ans;
        vector<int>temp;
        vector<int>done;
        permutation(ans,temp,arr,done,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};