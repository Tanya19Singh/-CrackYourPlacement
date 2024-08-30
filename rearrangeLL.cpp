#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
class Solution {
  public:
    void reorderList(Node* head) {
   
        Node*ans=head;
       Node* slow=head;
       Node* fast=head,*prev=NULL;
        while(fast!=NULL&&fast->next!=NULL)
        {   prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(prev!=NULL)
        prev->next=NULL;
        Node* sechead=slow,*fr;
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
            Node* temp=head->next;
            Node* temp2=prev->next;
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