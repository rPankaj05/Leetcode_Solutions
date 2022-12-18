//solution 1 in O(n) and O(n) and sol 2 is after 1st 
/*
class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            Node* prev=new Node(-1);
            while(n--){
                Node* temp=q.front();
                q.pop();
                prev->next=temp;
                prev=temp;
                if(temp->left) q.push(temp->left); 
                if(temp->right) q.push(temp->right);
            }
        } 
        return root;
    }
};  */


// solution 2 in O(n) and constant space
class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        Node* curr=root;
        while(curr!=NULL){
            Node* dummy=new Node(-1);
            Node* temp=dummy;
            while(curr!=NULL){

                if(curr->left){
                    temp->next=curr->left;
                    temp=temp->next;
                }
                
                if(curr->right){
                    temp->next=curr->right;
                    temp=temp->next;
                }
                curr=curr->next;
            }
            curr=dummy->next;
        }
        return root;
    }
};
