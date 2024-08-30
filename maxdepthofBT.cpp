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
void paths(TreeNode* root,string s,vector<string>&ans)
{
    if(root==NULL)return;
    if(root!=NULL&&root->left==NULL&&root->right==NULL)
    {s+=to_string(root->val);ans.push_back(s);return;}
    s+=to_string(root->val);
    s+="->";
    paths(root->left,s,ans);
    paths(root->right,s,ans);
    


}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string s;
        paths(root,s,ans);
        return ans;
    }
};
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        return 0;
        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
        return 1+max(l,r);
    }
};