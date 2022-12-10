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
    long long int currsum = 0;
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
        
     currsum=root->val%m+(solve(root->right))%m +(solve(root->left))%m;
        ans = max(ans,currsum*(totSum - currsum));
        return currsum;
    }
  
    

    int maxProduct(TreeNode* root) {
        
        totalSum(root);
        solve(root);
        return ans%m;
    } 
};