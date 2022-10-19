//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}


// } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
    
    void InsertAtTail( Node* &head,int val, Node *  & tail){
        if(head==NULL){
            Node * tmp=new Node(val);
            head=tmp;
            tail=tmp;
            return;
        }
        
         Node* tmp=new Node(val);
         tail->next=tmp;
         tail=tmp;
         return;
       
    }
    
    
    
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {  Node* head=NULL , *tail=NULL ;
       map<int, int > mp;
       while(head2!=NULL){
           mp[head2->data]++;
           head2=head2->next;
         }
       while(head1!=NULL){
           int val=head1->data;
           if(mp[val]>0){
              mp[val]--;
              InsertAtTail(head,val,tail);
           }
           head1=head1->next;
       } 
      return head;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends