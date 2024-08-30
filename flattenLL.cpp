#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
Node *flatten(Node *root) {
        // Your code here
        priority_queue<pair<int,Node*>,vector<pair<int,Node*>>,greater<pair<int,Node*>>>minh;
        while(root!=NULL)
        {
            minh.push({root->data,root});
            root=root->next;
        }
        Node* dummy=new Node(0),*ans=dummy;
        while(!minh.empty())
        {

            pair<int,Node*>p=minh.top();
            minh.pop();
            dummy->bottom=p.second;
            if(p.second->bottom!=NULL)
            {minh.push({p.second->bottom->data,p.second->bottom});p.second->bottom=NULL;}
            dummy=dummy->bottom;
        }
       return ans->bottom; 
    }