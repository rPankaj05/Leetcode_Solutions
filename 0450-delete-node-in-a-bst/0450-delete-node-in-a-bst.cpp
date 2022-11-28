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
    
   TreeNode* minval(TreeNode* root ){
       while(root->left!=NULL) root=root->left;
       return root;
   }
    
    
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
       
        if(root==NULL) return root;
        
        if(root->val==key){
          
            // 0 child case
           
            if(root->left==NULL and root->right==NULL) return NULL;
            
            //1 child case
          
            if(root->left!=NULL and root->right==NULL) 
                 return root->left;
           
            
            if(root->left==NULL and root->right!=NULL) 
                 return root->right;
          
            //2 child case
            
            if(root->left!=NULL and root->right!=NULL){
                int mnval=minval(root->right)->val;
                root->val=mnval;
                root->right=deleteNode(root->right,mnval);
                
            }
                
            
        }
        
        else if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        
        else {
            root->right=deleteNode(root->right,key);
        }
        
      return root;
    }
};