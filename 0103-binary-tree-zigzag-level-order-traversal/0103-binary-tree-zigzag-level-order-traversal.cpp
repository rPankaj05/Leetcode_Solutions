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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       
        vector<vector<int>> ans;
        
        if(root==NULL)  return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        bool flag=false;
        
        while(!q.empty()){
            
            int n=q.size();
            vector<int> tmp;
            
            for(int i=0;i<n;i++){
             
             TreeNode* curr=q.front();
             q.pop();
                
             tmp.push_back(curr->val);
            
             if(curr->left) q.push(curr->left);
             if(curr->right) q.push(curr->right);
                
            }
            
            if(flag)  reverse(tmp.begin(),tmp.end());
            
            ans.push_back(tmp);
            flag=!flag;
        }
       return ans; 
    }
};