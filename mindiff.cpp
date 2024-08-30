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
void cal(TreeNode* root,vector<int>&v)
{
    if(root==NULL)return;
    cal(root->left,v);
    v.push_back(root->val);
    cal(root->right,v);
}
    int getMinimumDifference(TreeNode* root) {
        vector<int>v;
        cal(root,v);
        int n=v.size();
        int ans=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            ans=min(ans,abs(v[i]-v[i+1]));

        }
        return ans;
    }
};