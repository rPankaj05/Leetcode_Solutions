//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}
int kthAncestor(Node *root, int k, int node);

int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        int k , node;
        scanf("%d ",&k);
        scanf("%d ",&node);
        string s;
		getline(cin,s);
		Node* root = buildTree(s);
		cout<<kthAncestor(root,k,node)<<endl;
    }
    return 0;
}

// } Driver Code Ends


//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete this function


//****************************************

/*
void solve(Node* root,int node,vector<int> &path,vector<int> &ans){
    if(root==NULL) return ;
   
    if(root->data==node){
        path.push_back(root->data);
        ans=path;
        return;
    }
    
    path.push_back(root->data);
    solve(root->left,node,path,ans);
    solve(root->right,node,path,ans);
    path.pop_back();
    
}

int kthAncestor(Node *root, int k, int node)
{
    vector<int> ans;
    vector<int> path;
    solve(root,node,path,ans);
   
    reverse(ans.begin(),ans.end());
    
     
   if(k>=ans.size()) return -1;
   else return ans[k];
    
}

*/
//***********************************************************


Node* solve(Node* root, int &k,int n){
  
    if(root==NULL) return NULL;
    
    if(root->data==n) return root;
    
    Node* leftAns=solve(root->left,k,n);
    Node* rightAns=solve(root->right,k,n);
    
    if(leftAns!=NULL and rightAns==NULL){
        k--;
        if(k<=0) {
            k=INT_MAX;
            return root;
        }
        return leftAns;
    }
    
    if(rightAns!=NULL and leftAns==NULL) {
        k--;
        if(k<=0) {
            k=INT_MAX;
            return root;
       }
       return rightAns;
    }
    
    return NULL;
}


int kthAncestor(Node *root, int k, int node)
{
    Node* ans=solve(root,k,node);
    if(ans==NULL || ans->data==node) return -1;
    else return ans->data;
    
}
