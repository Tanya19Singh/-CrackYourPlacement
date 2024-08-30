#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
class Solution {
  public:
    Node* zigZag(Node* head) {
        // your code goes here
        Node* dummy=new Node(0),*curr=head,*fr,*ans=dummy;
        dummy->next=head;
        int i=0;
        while(curr->next!=NULL)
        {
            fr=curr->next;
            if(i%2==0)
            {
                if(fr->data<curr->data)
                {
                    Node* temp=fr->next;
                    curr->next=temp;
                    fr->next=curr;
                    dummy->next=fr;
                }
                else
                curr=curr->next;
            }
            else
            {
                if(fr->data>curr->data)
                {
                    Node* temp=fr->next;
                    curr->next=temp;
                    fr->next=curr;
                    dummy->next=fr;
                }
                else
                curr=curr->next;
            }
            dummy=dummy->next;
            i++;
        }
        return ans->next;
    }
};