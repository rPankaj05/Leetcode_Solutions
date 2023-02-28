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
    
    map<string,int> mp;
    
    string solve(TreeNode* root,vector<TreeNode*> &ans){
      
        if(root==NULL) return "";
       
        string s=to_string(root->val)+","+solve(root->left,ans)
                          +","+solve(root->right,ans);
        
        mp[s]++;
        if(mp[s]==2) ans.push_back(root);
        return s;
        
    }
    
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> ans;
        solve(root,ans);
        return ans;
    }
};