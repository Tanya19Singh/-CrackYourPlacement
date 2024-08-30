#include<bits/stdc++.h>
using namespace std;

class RandomizedCollection {
public:
unordered_map<int,vector<int>>m;
vector<pair<int,int>>nums;
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        bool res=m.find(val)==m.end();
        m[val].push_back(nums.size());
        nums.push_back({val,m[val].size()-1});
        return res;
    }
    
    bool remove(int val) {
        bool res=m.find(val)!=m.end();
        if(res)
        {
            auto l=nums.back();
            m[l.first][l.second]=m[val].back();
            nums[m[val].back()]=l;
            m[val].pop_back();
            if(m[val].empty())m.erase(val);
            nums.pop_back();
            
            
        }
        return res;
    }
    
    int getRandom() {
        return nums[rand()%nums.size()].first;
    }
};
