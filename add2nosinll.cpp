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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry=0;
    ListNode* t=new ListNode;
    ListNode* head=t;

    while(l1!=nullptr||l2!=nullptr)
    {ListNode* nn=new ListNode;
    nn->val=carry;
    if(l1!=nullptr)
    nn->val+=l1->val;
    if(l2!=nullptr)
    nn->val+=l2->val;
   if(nn->val>9)
        {carry=nn->val/10;
        nn->val%=10;}
        else
        carry=0;
        t->next=nn;
t=t->next;
if(l1!=nullptr)
l1=l1->next;
if(l2!=nullptr)
l2=l2->next;
    }
   if(carry!=0)
   {
     ListNode* nn=new ListNode;
     nn->val=carry;
     t->next=nn;
   } 
   return head->next;

    }
};