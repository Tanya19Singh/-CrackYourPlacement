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
    void reorderList(ListNode* head) {
        ListNode*ans=head;
       ListNode* slow=head;
       ListNode* fast=head,*prev=NULL;
        while(fast!=NULL&&fast->next!=NULL)
        {   prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(prev!=NULL)
        prev->next=NULL;
        ListNode* sechead=slow,*fr;
        prev=nullptr;
        
        
        while(sechead!=nullptr)
        {
            fr=sechead->next;
            sechead->next=prev;
            prev=sechead;
            sechead=fr;
        }
        while(head!=NULL)
        {
            ListNode* temp=head->next;
            ListNode* temp2=prev->next;
            head->next=prev;
            prev->next=temp;
            sechead=prev;
            head=temp;
            prev=temp2;
        }
        if(prev!=NULL)
        {
            sechead->next=prev;
        }
        head=ans;
    }
};
