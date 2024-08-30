#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>maxh;
        int n=points.size(),ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            while(!maxh.empty()&&points[i][0]-maxh.top().second>k)maxh.pop();
            if(!maxh.empty())
            ans=max(ans,points[i][0]+points[i][1]+maxh.top().first);
            maxh.push({points[i][1]-points[i][0],points[i][0]});
        }
        return ans;
    }
};