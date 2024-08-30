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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
        return false;
        if(root->left==NULL&&root->right==NULL)
        {
            targetSum-=root->val;
            if(targetSum==0)
            return true;
            else 
            return false;
        }
        targetSum-=root->val;
        bool l=hasPathSum(root->left,targetSum);
        bool r=hasPathSum(root->right,targetSum);
        return l||r;


    }
};