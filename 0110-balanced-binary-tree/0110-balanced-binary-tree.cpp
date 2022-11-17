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
    int maxDepth(TreeNode* root){
         if(root==NULL) return 0;
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        return 1+max(lh,rh);
    }
    
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        if((abs(lh-rh))>1) return false;
        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);
        if(!r or !l) return false;
        return true;
    }
};