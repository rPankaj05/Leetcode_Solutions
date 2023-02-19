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
    
    bool ans=false;
    
    void solve(TreeNode* root, int sum,int targetSum){
        if(root==NULL) return ;
        
        sum=sum+root->val;
       
        if(root->left==NULL and root->right==NULL){
            if(sum==targetSum) ans=true;
        }
        
        solve(root->left,sum,targetSum);
        solve(root->right,sum,targetSum);
    }
    
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
       solve(root,0,targetSum);
        return ans;
    }
};