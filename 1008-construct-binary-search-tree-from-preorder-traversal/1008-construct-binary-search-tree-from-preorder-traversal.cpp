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
     
    TreeNode* solve(vector<int>& preorder, int mx, int &i){
       
        if(i>=preorder.size() || preorder[i]>mx) return NULL;
        
        TreeNode* root=new TreeNode(preorder[i++]);
        
        root->left=solve(preorder,root->val,i);
        
        root->right=solve(preorder,mx,i);
        
        return root;
            
    }
    

public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int mx=INT_MAX;
        int i=0;
        return solve(preorder,mx,i);
    }
};