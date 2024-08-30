#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct ListNode{
  public:
  int data;
  ListNode* next;
  ListNode(int i)
  {
    data=i;
    next=NULL;
  }
};
   ListNode* reverse(ListNode* head,int k)
    {
        ListNode *prev=NULL,*fr;
        while(k--)
         {fr=head->next;
            head->next=prev;
            prev=head;
            head=fr;}
            return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int i=1;
        ListNode* grphead,*grptail,*dummy=new ListNode(0),*ans=dummy;
        while(head!=NULL)
        {
           if(i==1)
           {
            grphead=head;
           }
           else if(i==k)
           {
            ListNode*temp=head->next;
            grptail=reverse(grphead,k);
            dummy->next=grptail;
            grphead->next=temp;
            dummy=grphead;
            i=1;
            head=temp;
            continue;
           }
           
           head=head->next;i++;
        }
        return ans->next;
    }
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3) ;
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
 ListNode *ans=reverseKGroup(head,2);
 while(ans!=NULL)
 {
    cout<<ans->data<<" ";
    ans=ans->next;
 }
}