#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node{
  public:
  int data;
  Node* next;
  Node(int i)
  {
    data=i;
    next=NULL;
  }
};
 Node *compute(Node *head) {
        // your code goes here
        Node* prev=NULL;
        Node*temp=head,*forward;
        while(temp!=NULL)
        {
            forward=temp->next;
            temp->next=prev;
            prev=temp;
            temp=forward;
        }
        int maxe=prev->data;
        temp=prev->next;
        Node* curr=prev;
        while(temp!=NULL)
        {
            if(temp->data<maxe)
            {
                prev->next=temp->next;
                
            }
            else
            {
                maxe=max(maxe,temp->data);
                prev=prev->next;
            }
            temp=temp->next;
        }
        temp=curr;
        prev=NULL;
        while(temp!=NULL)
        {
            forward=temp->next;
            temp->next=prev;
            prev=temp;
            temp=forward;
        }
        return prev;
    }
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Node* head=new Node(12);
    head->next=new Node(15);
    head->next->next=new Node(10) ;
    head->next->next->next=new Node(11);
 Node *ans=compute(head);
 while(ans!=NULL)
 {
    cout<<ans->data<<" ";
    ans=ans->next;
 }
}