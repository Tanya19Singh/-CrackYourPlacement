#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int a=0,b=height.size()-1;
        int ans=INT_MIN,mine;
        while(a<b)
        {
            mine=min(height[a],height[b]);
            ans=max(ans,mine*(b-a));
            if(height[a]<height[b])
            a++;
            else
            b--;

        }
        return ans;
    }
};