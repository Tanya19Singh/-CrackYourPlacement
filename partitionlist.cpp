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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy=new ListNode(0),*dummy2=new ListNode();
        ListNode* dummyhead=dummy,*dummy2head=dummy2;
        while(head!=NULL)
        {
            if(head->val<x)
            {dummy->next=head;dummy=dummy->next;}
            else
            {dummy2->next=head;dummy2=dummy2->next;}
            head=head->next;
        }
        dummy2->next=NULL;
        dummy->next=dummy2head->next;
        return dummyhead->next;
    }
};