#include<bits/stdc++.h>
using namespace std;
class LRUCache {
public:
    
    class node{
        public:
        int key;
        int value;
        node *next;
        node *prev;
        node(int key_,int  val)
        {
            key=key_;
            value=val;
        }
    };
    
    unordered_map<int,node *>m;
    node* head=new node(-1,-1);
    node* tail=new node(-1,-1);
    int cap;
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
    tail->prev=head;
    }
    void addnode(node* n)
    {
        node *temp=head->next;
        n->prev=head;
        n->next=temp;
        temp->prev=n;
        head->next=n;
    }
    void deletenode(node *n)
    {
        node * delprev=n->prev;
        node * delnext=n->next;
        delprev->next=delnext;
        delnext->prev=delprev;     
    }
    int get(int key) {
        if(m.find(key)!=m.end())
        {
            node *n=m[key];
            int val=n->value;
            m.erase(key);
            deletenode(n);
            addnode(n);
            m[key]=head->next;
            return val;
        }
    return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end())
        {
            node* n=m[key];
            m.erase(key);
            deletenode(n);
        }
        if(m.size()==cap)
        {
            m.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key,value));
        m[key]=head->next;
    }
};