#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            //-------o(m+n)------
        ListNode* pt1=headA,*pt2=headB;
        while(pt1!=pt2)
        {
            if(pt1==NULL)
            {
                pt1=headB;
            }
            else
            pt1=pt1->next;
            if(pt2==NULL)
            {
                pt2=headA;
            }
            else
            pt2=pt2->next;

        }
        return pt1;
        }
};