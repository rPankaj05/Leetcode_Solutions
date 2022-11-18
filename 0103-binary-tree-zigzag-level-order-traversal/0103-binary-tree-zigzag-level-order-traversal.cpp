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
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        bool flag=true;
        q.push(root);
        while(!q.empty()){
           int n=q.size();
            vector<int> vec;
            for(int i=0;i<n;i++){
            TreeNode* curr=q.front();
            q.pop();
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
            vec.push_back(curr->val);
          }
        if(flag) { ans.push_back(vec); flag=false;}
        else {
            reverse(vec.begin(),vec.end());
            ans.push_back(vec);
            flag=1;
         }
      }
     return ans;
    }
};