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
   
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL&&root2==NULL)return NULL;
        int s=0;
        if(root1!=NULL)
        s+=root1->val;
        if(root2!=NULL)
        s+=root2->val;
        TreeNode* root=new TreeNode(s);
        TreeNode* left,*right;
        if(root1!=NULL&&root2!=NULL)
        {left=mergeTrees(root1->left,root2->left);
        right=mergeTrees(root1->right,root2->right);}
        else if(root1!=NULL)
        {left=mergeTrees(root1->left,NULL);
         right=mergeTrees(root1->right,NULL);}
        else
        {left=mergeTrees(NULL,root2->left);
         right=mergeTrees(NULL,root2->right);}
root->left=left;
root->right=right;
return root;
    }
};