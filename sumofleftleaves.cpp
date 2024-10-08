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
bool isleaf(TreeNode* root)
{
    if(root==NULL)return false;
    if(root->left==NULL&&root->right==NULL)
    return true;
    return false;
}
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)return 0;
        if(isleaf(root->left))return root->left->val+sumOfLeftLeaves(root->right);
        else
        return sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);

    }
};