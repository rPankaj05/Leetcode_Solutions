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
    
    void solve(TreeNode* root, int k,vector<int> &path ,
               vector<vector<int>> &ans ){
        
        if(root==NULL) return;
        
        path.push_back(root->val);
      
        
        if(root->left==NULL and root->right==NULL){
            if(k-root->val==0) ans.push_back(path);
            path.pop_back();
            return ;
        }
        
       
        
        solve(root->left,k-root->val,path,ans);
        solve(root->right,k-root->val,path,ans);
        
       path.pop_back();
        
        
    }
    
    
    
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        vector<int> path;
        solve(root,targetSum,path,ans);
        return ans;
    }
};