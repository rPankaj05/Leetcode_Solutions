/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    map<TreeNode*,int> mp;
    int sum=0;
    void solve(TreeNode* root){
        if(root==NULL) return ;
        if(root->left==NULL and root->right==NULL){
            if(mp[root]==-1) sum+=root->val;
        }
        mp[root->left]=-1;
        mp[root->right]=1;
        solve(root->left);
        solve(root->right);
    }
 
public:
    
    int sumOfLeftLeaves(TreeNode* root) {
        solve(root);
        return sum;
    }
};