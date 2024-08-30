#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,n=nums.size()-1;
        int ans=0;
        while(i<=n/2){
            ans+=nums[n-i]-nums[i];
            i++;
        }
        return ans;
    }
};