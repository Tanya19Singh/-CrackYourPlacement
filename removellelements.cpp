#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev=new ListNode(-1);
        prev->next=head;
        ListNode* curr=head,*forward;
        ListNode* ans=prev;
        while(curr!=NULL)
        {
            forward=curr->next;
            if(curr->val==val)
            {
                prev->next=forward;
            }
            else
            {
                prev=curr;
            }
            curr=forward;
        }
       return ans->next;
    }
};