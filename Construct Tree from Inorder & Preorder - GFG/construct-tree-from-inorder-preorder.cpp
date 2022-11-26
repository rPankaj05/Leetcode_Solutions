//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/

void creatMapping(int in[],map<int,int> &mp,int n){
    for(int i=0;i<n;i++) mp[in[i]]=i;
}

 Node* solve(int in[], int pre[],int &preorderindex,int inorderstart,
              int  inorderend,int n , map<int,int> &mp)
        {
                    
         if(preorderindex>=n || inorderstart>inorderend) return NULL;           
           
         int element=pre[preorderindex++];
         Node* root=new Node(element);
         
         int position=mp[element];
         
    root->left=solve(in,pre,preorderindex,inorderstart,position-1,n,mp);
    root->right=solve(in,pre,preorderindex,position+1,inorderend,n,mp);
    
    return root;
             
   }


class Solution{
    public:
    Node* buildTree(int in[],int pre[], int n)
    {   int index=0;
        map<int,int> mp;
        creatMapping(in,mp,n);
        Node* ans=solve(in,pre,index,0,n-1,n,mp);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends