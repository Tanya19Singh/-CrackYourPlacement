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
    bool isPalindrome(ListNode* head) {
          ListNode* s=head;
   ListNode* f=head;
   while(f->next!=NULL&&f->next->next!=NULL)
   {
       s=s->next;
       f=f->next->next;
   }
    ListNode* prev=NULL;
    ListNode* next=NULL;
    ListNode* current;
  
      current=s->next;
  
  while(current!=nullptr)
  {

      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
  }
while(prev!=NULL)
{
    if(head->val!=prev->val)
    return false;
    prev=prev->next;
    head=head->next;
}
return true;
    }
};