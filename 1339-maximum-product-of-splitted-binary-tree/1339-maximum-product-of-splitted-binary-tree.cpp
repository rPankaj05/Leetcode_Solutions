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
public:
    long long int currSum = 0;
    long long int totSum = 0;
    long long int ans = 0;
    long long int m = 1e9 + 7;
 
    void totalSum(TreeNode* root) 
      {
        if(root==NULL) return ;
        totalSum(root->left);
        totalSum(root->right);
        totSum = (totSum + root->val)%m;
      }
    
    
    int  solve(TreeNode* root)
     {
        if(root==NULL) return 0;
        
        long long leftSum=solve(root->left);
        long long rightSum=solve(root->right);
     
        currSum=root->val+leftSum +rightSum;
       
        ans = max(ans,currSum*(totSum - currSum));
      
        return currSum;
    }
  
    

    int maxProduct(TreeNode* root) {
        
        totalSum(root);
        solve(root);
        return ans%m;
    } 
};