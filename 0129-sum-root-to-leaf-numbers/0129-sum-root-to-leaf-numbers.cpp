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
    
    void solve(TreeNode* root, int currSum,int &ans){
      
        if(root==NULL) return ;
        currSum=10*currSum+root->val;
      
        if(root->left==NULL and root->right==NULL) {
            ans+=currSum;
            return ;
        }
        
        solve(root->left,currSum,ans);
        solve(root->right,currSum,ans);
        
    }
    
    
public:
    int sumNumbers(TreeNode* root) {
        int ans=0;
        solve(root,0,ans);
        return ans;
    }
};