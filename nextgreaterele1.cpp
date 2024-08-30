#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        vector<int>ans(nums2.size());
     
        for(int i=nums2.size()-1;i>=0;i--)
        {

            while(!st.empty()&&(st.top()<=nums2[i]))
            st.pop();
            if(st.empty())
            ans[i]=-1;
            else
            ans[i]=st.top();
            st.push(nums2[i]);
        }
        int j=0;
        for(auto it:nums1)
        {
            auto t=find(nums2.begin(),nums2.end(),it);
            auto i=t-nums2.begin();
            nums1[j++]=ans[i];
        }
        return nums1;
    }
};