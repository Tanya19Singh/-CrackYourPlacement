#include<bits/stdc++.h>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
bool ans=false;
bool issame(TreeNode* a,TreeNode* b)
{
    if(a!=NULL&&b!=NULL)
    return a->val==b->val&&issame(a->left,b->left)&&issame(a->right,b->right);
    else if(a==NULL&&b==NULL)
    return true;
    else
    return false;

}
void check(TreeNode* root,TreeNode* subroot)
{
    if(!root)return ;
    if(root->val==subroot->val&&issame(root,subroot))ans=true;
    check(root->left,subroot);
    check(root->right,subroot);
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
      check(root,subRoot);
      return ans;  
    }
};