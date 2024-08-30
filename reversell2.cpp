#include<bits/stdtr1c++.h>
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
     ListNode* reverseBetween(ListNode* head, int left, int right) {
       ListNode* dummy=new ListNode(-1);
       dummy->next=head;
       ListNode*leftpre=dummy;
       for(int i=1;i<left;i++)
       {
        leftpre=leftpre->next;
        head=head->next;
       }
       ListNode* prev=NULL,*fr,*temp=head;

       for(int i=left;i<=right;i++)
       {
            fr=head->next;
            head->next=prev;
            prev=head;
            head=fr;
       }
       leftpre->next=prev;
        temp->next=head;
        return dummy->next;;
    }
};