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
    
    void solve(TreeNode* root, vector<int> &ans){
        
        if(root==NULL) return;
        if(root->left==NULL and root->right==NULL) {
            ans.push_back(root->val);
            return;
        }
        
       solve(root->left,ans);
       solve(root->right,ans);
        
    }

    
    
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vec1,vec2;
        solve(root1,vec1);
        solve(root2,vec2);
        return vec1==vec2;
        
    }
};