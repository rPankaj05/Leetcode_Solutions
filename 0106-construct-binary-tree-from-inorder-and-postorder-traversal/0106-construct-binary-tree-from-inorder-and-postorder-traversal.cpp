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
    
    TreeNode* solve(vector<int>& in, vector<int>& post, int &index,
                      int  inStart, int inEnd, int n,map<int,int> &mp)
      
    {
      
        if(index<0 || inStart>inEnd) return NULL;
        
        int element=post[index--];
        TreeNode* root=new TreeNode(element);
        int pos=mp[element];
        
        root->right=solve(in,post,index,pos+1,inEnd,n,mp);
        root->left=solve(in,post,index,inStart,pos-1,n,mp);
        
       return root; 
        
    }
    
public:
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        map<int,int> mp;
        
        int n=in.size();
        for(int i=0;i<n;i++) mp[in[i]]=i;
        
        int index=n-1;
        return solve(in, post,index,0,n-1,n,mp);
        
    }
};