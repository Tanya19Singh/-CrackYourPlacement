#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size(),m=1000000007;
        stack<pair<int,int>>leftlimit,rightlimit;
        vector<int>left(n),right(n);
        for(int i=0;i<n;i++)
        {int ct=1;
            while(!leftlimit.empty()&&leftlimit.top().first>=arr[i])
            {
                ct+=leftlimit.top().second;
                leftlimit.pop();
            }
            leftlimit.push({arr[i],ct});
            left[i]=ct;
        }
        for(int i=n-1;i>=0;i--)
        {int ct=1;
            while(!rightlimit.empty()&&rightlimit.top().first>arr[i])
            {
                ct+=rightlimit.top().second;
                rightlimit.pop();
            }
            rightlimit.push({arr[i],ct});
            right[i]=ct;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=(ans+(((left[i]*1LL*right[i])%m)*1LL*arr[i])%m)%m;
        }
        return ans;
    }
};