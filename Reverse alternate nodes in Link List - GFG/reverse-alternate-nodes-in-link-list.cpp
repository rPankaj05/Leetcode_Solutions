//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/

struct Node* reverse(struct Node *head)
    {
       Node* prev=NULL, *forward=NULL;
       Node* curr=head;
      
      while(curr!= NULL){
          forward=curr->next;
          curr->next=prev;
          prev=curr;
          curr=forward;
      }
      return prev;
    }


class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        Node* curr=odd;
        Node* even= new Node(-1);
        Node* curr2=even;
        
        while(curr!=NULL and curr->next!=NULL){
                curr2->next=curr->next;
                curr2=curr2->next;
                curr->next=curr->next->next;
                curr=curr->next;
        }
        
        curr2->next = NULL;
        while(odd->next!=NULL) odd=odd->next;
        odd->next=reverse(even->next);
        
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends