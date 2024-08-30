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
ListNode* mergeList(ListNode* l,ListNode* r)
{ListNode* t=nullptr;
    ListNode* ans=t;
    while(l!=nullptr&&r!=nullptr)
    {
        if(l->val<=r->val)
       { if(t==nullptr)
       { ans=l;
        t=l;}
        else
        {
            t->next=l;
            t=t->next;
        }
        l=l->next;
        }
        else{
           if(t==nullptr)
       { ans=r;
        t=r;}
        else
        {
            t->next=r;
            t=t->next;
        }
        r=r->next;  
        }
    }
    if(l!=nullptr)
    t->next=l;
    if(r!=nullptr)
    t->next=r;
return ans;
}
    ListNode* sortList(ListNode* head) {
    // Write your code here.
    if(head==nullptr||head->next==nullptr)
    return head;
    ListNode* s=head;
    ListNode* f=head;
    ListNode* temp=nullptr;
    while (f!=nullptr&&f->next!=nullptr)
    {temp=s;
        s=s->next;
        f=f->next->next;
    }
    temp->next=nullptr;
    ListNode* l=sortList(head);
    ListNode* r=sortList(s);
    ListNode* ans=mergeList(l,r);
return ans;
}

   
};