#include<bits/stdc++.h>
using namespace std;

 struct Node {
     int val;
     Node *next;Node* random;
     Node() : val(0), next(nullptr) {}
   Node(int x) : val(x), next(nullptr) {}
   Node(int x, Node *next) : val(x), next(next) {}
 };
 class Solution {
public:
  Node* copyRandomList(Node* head) {
      
Node* temp=head;
while(temp!=nullptr)
{
	Node* nn=new Node(temp->val);
	nn->next=temp->next;
	temp->next=nn;
	if(temp->next!=nullptr)
	temp=temp->next->next;
	else
temp=nullptr;
}
temp=head;
while(temp!=nullptr)
{if(temp->random!=nullptr)
	temp->next->random=temp->random->next;
	else
	temp->next->random=nullptr;
	temp=temp->next->next;
}
temp=head;
Node* dummy=new Node(0);
Node* ans=dummy;
while(temp!=nullptr)
{
	dummy->next=temp->next;
    temp->next=temp->next->next;
    temp=temp->next;
    dummy=dummy->next;
}
	return ans->next;
}
    
};