#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int targetind=nums.size()-1;
        for(int i=nums.size()-2;i>=0;i-- )
        {
            if(targetind<=i+nums[i])
            targetind=i;
        }
        return targetind==0;
    }
};