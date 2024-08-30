#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
 #define pii pair<int,ListNode*> 
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*> lists) {
        priority_queue<pii,vector<pii>,greater<pii>>minh;
        for(int i=0;i<lists.size();i++)
        {
            if(lists[i])
            minh.push({lists[i]->val,lists[i]});}

        ListNode*ans=new ListNode();
        ListNode*t=ans;
        while(!minh.empty())
        {
            t->next=minh.top().second;
            t=t->next;
            ListNode* temp=minh.top().second;
            if(temp->next!=nullptr)
            {
                minh.push({temp->next->val,temp->next});
            }
            minh.pop();

        }

return ans->next;
    }
};