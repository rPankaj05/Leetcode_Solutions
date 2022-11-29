//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{ 
    
    private:
    
      Node* getMiddle(Node* head){
          
          Node* slow=head;
          Node* fast=head->next;
          
          while(fast!=NULL and fast->next!=NULL){
              fast=fast->next->next;
              slow=slow->next;
          }
          return  slow;
      }
      
   
      Node* reverse(Node* head){
         Node* prev=NULL;
         Node* curr=head;
         Node* forward=NULL;
         while(curr!=NULL){
             forward=curr->next;
             curr->next=prev;
             prev=curr;
             curr=forward;
         }
         return prev;
      }
    
   void merge(Node* a, Node* b){
      
      while(a!=NULL and b!=NULL){
          Node* next1=a->next;
          Node* next2=b->next;
          
          b->next=a->next;
          a->next=b;
          
          a=next1;
          b=next2;
      } 
  
   } 
    
    
    
    
public:
    void reorderList(Node* head) {
        
        if(head->next==NULL) return ; // if only one node then return
        
        Node* mid=getMiddle(head);  // find mid element
    
        Node* head2=reverse(mid->next); // reverse node after the middle
        
        mid->next=NULL;  // set mid->next=NULL
        
       merge(head,head2); /// merge both list 
        
    }
};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends