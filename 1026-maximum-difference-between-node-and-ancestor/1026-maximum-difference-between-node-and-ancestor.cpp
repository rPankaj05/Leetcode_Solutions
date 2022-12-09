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
   
    private: 
     
    void solve(TreeNode* root, int mn ,int mx, int &ans){
        
        if(root==NULL) return ;
        
        if(root->val<mn) mn=root->val;
        if(root->val>mx) mx=root->val;
        
        ans=max(ans,abs(mx-mn));
        
        solve(root->left,mn,mx,ans);
        solve(root->right,mn,mx,ans);
        
    }
    
    
    
public:
    int maxAncestorDiff(TreeNode* root) {
       
        if(root== NULL || root->left==NULL and root->right==NULL) return 0;
        
        int mx=root->val;
        int mn=root->val;
        
        int ans=0;
        solve(root,mn,mx,ans);
        
        return ans;
        
    }
};