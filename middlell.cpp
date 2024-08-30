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
    ListNode* middleNode(ListNode* head) {
        ListNode* t=head;
        ListNode* t2=head;
        while(t2!=nullptr&&t2->next!=nullptr)
        {
            t=t->next;
            t2=t2->next->next;
        }

   
   return t;
    }
};