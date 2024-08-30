#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findPair(int n, int x, vector<int> arr) {
        // code here
        unordered_map<int,int>m;
        for(auto it:arr)
        {
            m[it]++;
        }
        for(auto it:arr)
        {
            if(m[(x+it)])
            {
                if((x+it)==it)
                {if(m[(x+it)]>1)
                return 1;}
                else
                return 1;
            }
        }
        return -1;
    }
};
