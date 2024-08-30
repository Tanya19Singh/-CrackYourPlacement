#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int p1=nums[n]*nums[n-1]*nums[n-2];
        int p2=nums[n]*nums[0]*nums[1];

    return max(p1,p2);
    }
}; 