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
void sort(Node *head)
    {
         // Code here
         Node *temp=head;
         Node* n1=new Node(-1);
         Node* n2=new Node(-1);
         Node* n1head=n1,*n2head=n2;
         int i=0;
         while(temp!=NULL)
         {
             if(i%2==0)
             {
                 n1->next=temp;
                 n1=n1->next;
                 
             }
             else
             {
                 n2->next=temp;
                 n2=n2->next;
             }
             i++;
             temp=temp->next;
         }
         n1->next=NULL;
         n2->next=NULL;
         temp=n2head->next;
         Node* prev=NULL;
         Node* t;
         while(temp!=NULL)
         {
              t=temp->next;
              temp->next=prev;
              prev=temp;
              temp=t;
              
         }
         n1head=n1head->next;
         n2head=prev;
         Node* head2=new Node(-1);
         head=head2;
         while(n1head!=NULL&&n2head!=NULL)
         {
             if(n1head->data<n2head->data)
             {
                 head2->next=n1head;
                 n1head=n1head->next;
             }
             else
             {
                 head2->next=n2head;
                 n2head=n2head->next;
             }
             head2=head2->next;
         }
         while(n1head!=NULL)
         {
             head2->next=n1head;
             n1head=n1head->next;
             head2=head2->next;
         }
         while(n2head!=NULL)
         {
             head2->next=n2head;
             n2head=n2head->next;
             head2=head2->next;
         }
head=head->next;
    }
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  Node* head=new Node(1);
  head->next=new Node(9);
  head->next->next=new Node(2);
  sort(head);
  while(head!=NULL)
  {
    cout<<head->data;
    head=head->next;
  }
}