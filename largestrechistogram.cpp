#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
  
   int n=heights.size();
   vector<int>left(n),right(n);
   stack<int>st,st2;
   for(int i=0;i<heights.size();i++)
   {
     while(!st.empty()&&(heights[st.top()]>=heights[i]))
     {
       st.pop();
     }
     if(!st.empty())
     left[i]=st.top();
     else
     left[i]=-1;
          st.push(i);

   }

   for(int i=n-1;i>=0;i--)
   {
     while(!st2.empty()&&(heights[st2.top()]>=heights[i]))
     {
       st2.pop();
     }
     if(!st2.empty())
     right[i]=st2.top();
     else
     right[i]=n;
     st2.push(i);
     
   }
   int ans=INT_MIN;
   for(int i=0;i<n;i++)
   {
    cout<<ans<<endl;
     ans=max(ans,(right[i]-left[i]-1)*heights[i]);
   }
return ans;
 }
    
};