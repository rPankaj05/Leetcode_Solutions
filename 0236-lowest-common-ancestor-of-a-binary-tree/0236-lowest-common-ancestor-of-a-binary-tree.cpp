/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

#define lcs lowestCommonAncestor

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      
        if(root==NULL) return  NULL;
        if(root==p or root==q) return root;
        
        TreeNode* leftAns=lcs(root->left,p,q);
        TreeNode* rightAns=lcs(root->right,p,q);
        
       if(leftAns!=NULL and rightAns!=NULL) return root;
       if(leftAns!=NULL and rightAns==NULL) return leftAns;
       if(leftAns==NULL and rightAns!=NULL) return rightAns;
       else return NULL;
    }
};