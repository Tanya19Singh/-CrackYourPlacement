#include<bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};


class Solution {
public:
    Node* flatten(Node* head) {
       stack<Node*>st;
       Node* curr=head,*tail=head,*ans=head;
       while(curr!=NULL)
       {
        if(curr->child!=NULL)
        {
            if(curr->next!=NULL)
            {st.push(curr->next);
            curr->next->prev=NULL;}
            curr->next=curr->child;
            curr->child->prev=curr;
            curr->child=NULL;
        }
        tail=curr;
        curr=curr->next;
       }
       while(!st.empty())
       {
        Node* temp=st.top();
        st.pop();
         tail->next=temp;
        temp->prev=tail;
        while(temp!=NULL)
        {
           
            tail=temp;
            temp=temp->next;
        }
       }
return ans;
    }
};