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
    
    void solve(TreeNode* root, int k,vector<int> path ,
               vector<vector<int>> &ans,int sum ){
        
        if(root==NULL) return;
        
        path.push_back(root->val);
        sum+=root->val;
        
        if(root->left==NULL and root->right==NULL){
            if(sum==k) ans.push_back(path);
            return ;
        }
        
       
        
        solve(root->left,k,path,ans,sum);
        solve(root->right,k,path,ans,sum);
        
       // path.pop_back();
        
        
    }
    
    
    
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        vector<int> path;
        solve(root,targetSum,path,ans,0);
        return ans;
    }
};