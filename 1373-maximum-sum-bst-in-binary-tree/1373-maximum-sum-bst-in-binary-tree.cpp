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

class info {
    public:
    int maxi;
    int mini;
    bool isBST;
    int sum;
  };


class Solution {
    
     info solve(TreeNode* root, int & ans){
      
        if(root==NULL) return {INT_MIN, INT_MAX,true,0};
        
        info left=solve(root->left,ans);
        info right=solve(root->right,ans);
        
        info currNode;
        
        currNode.sum=left.sum+right.sum+root->val;
        currNode.maxi=max(root->val,right.maxi);
        currNode.mini=min(left.mini, root->val);
        
        if(left.isBST and right.isBST and root->val<right.mini 
                     and root->val>left.maxi)
             {
                 currNode.isBST=true;
             }
        else currNode.isBST=false;
        
        if(currNode.isBST) ans=max(ans,currNode.sum);
        
        return currNode;
    }
    
    
public:
    int maxSumBST(TreeNode* root) {
        int maxsize=0;
    	info temp=solve(root,maxsize);
    	return maxsize;
    }
};