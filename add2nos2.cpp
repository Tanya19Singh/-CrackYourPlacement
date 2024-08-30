#include<bits/stdc++.h>
using namespace std;

 struct ListNode{
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* prev=NULL,*fr;
        while(l1!=NULL)
        {
            fr=l1->next;
            l1->next=prev;
            prev=l1;
            l1=fr;
        }
        l1=prev;
        prev=NULL;
        while(l2!=NULL)
        {
            fr=l2->next;
            l2->next=prev;
            prev=l2;
            l2=fr;
        }
        l2=prev;
        ListNode* ans=new ListNode(0);
        ListNode*temp=ans;
        int c=0;
        while(l1!=NULL||l2!=NULL)
        {
            ListNode* nn=new ListNode();
            nn->val=c;
            if(l1!=NULL)
            nn->val+=l1->val;
            if(l2!=NULL)
            nn->val+=l2->val;
            if(nn->val>9)
            {
                c=nn->val/10;
                nn->val%=10;
            }
            else
            c=0;
            if(l1!=NULL)
            l1=l1->next;
            if(l2!=NULL)
            l2=l2->next;
            ans->next=nn;
            ans=ans->next;
        }
        if(c>0)
        {
            ListNode* nn=new ListNode(c);
            ans->next=nn;
            
        }
temp=temp->next;
prev=NULL;
while(temp!=NULL)
{
    fr=temp->next;
    temp->next=prev;
    prev=temp;
    temp=fr;
}
return prev;
    }
};
