
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(),*prev=dummy;
        dummy->next=head;
        while(head!=NULL)
        {
            if(head->next!=NULL&&head->val==head->next->val)
            {
                while(head->next!=NULL&&head->val==head->next->val)
                {
                    head=head->next;
                }
                prev->next=head->next;
            }
            else
            prev=head;
            head=head->next;
        }
        return dummy->next;
    }
};