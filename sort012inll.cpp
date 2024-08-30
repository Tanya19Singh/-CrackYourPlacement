#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	   this-> data =x;
	    this->next = NULL;
	}
};
void sort(Node *head)
    {
         // Code here
         Node *temp=head;
         int ct0=0,ct1=0,ct2=0;
         while(temp!=NULL)
         {
            if(temp->data==0)
            {ct0++;}
            else if(temp->data==1)
            ct1++;
            else
            ct2++;
            temp=temp->next;
         }
         temp=head;
         while(temp!=NULL)
         {
            if(ct0)
            {
                temp->data=0;
                ct0--;
            }
            else if(ct1)
            {
                temp->data=1;
                ct1--;
            }
            else if(ct2)
            {
                temp->data=2;
                ct2--;
            }
            temp=temp->next;
         }
    }
    int main()
    {
Node* head=new Node(0);
head->next=new Node(1);
head->next->next=new Node(2);
head->next->next->next=new Node(0);
sort(head);
while(head!=NULL)
{
    cout<<head->data<<" ";
    head=head->next;
}

    }