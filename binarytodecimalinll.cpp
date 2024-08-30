 #include<bits/stdc++.h>
 using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
  };
 
class Solution {
public:
    int getDecimalValue(ListNode* head) {
       stack<int>st;
       while(head!=nullptr)
       {
        st.push(head->val);
        head=head->next;
       } 
       int i=0,ans=0;
       while(!st.empty())
       {
        ans+=(st.top()*(1<<i));
        i++;
        st.pop();
       }
       return ans;
    }
};