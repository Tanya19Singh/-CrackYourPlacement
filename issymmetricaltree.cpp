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
bool issymetrical(TreeNode* subtree1,TreeNode* subtree2)
{
    if(subtree1==NULL||subtree2==NULL)
    return subtree1==subtree2;
    bool l=issymetrical(subtree1->left,subtree2->right);
    bool r=issymetrical(subtree1->right,subtree2->left);
    return (subtree1->val==subtree2->val)&&l&&r;
}
    bool isSymmetric(TreeNode* root) {
        return issymetrical(root->left,root->right);
    }
};