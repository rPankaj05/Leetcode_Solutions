//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
    
    Node* middle(Node* head){
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    
    Node* merge(Node* left, Node* right){
        if(left==NULL) return right;
        if(right==NULL) return left;
        Node* ans= new Node(-1);
        Node* tmp=ans;
        while(left!=NULL and right!=NULL){
            if(left->data<right->data){
                tmp->next=left;
                tmp=left;
                left=left->next;
            }
        else {
            tmp->next=right;
            tmp=right;
            right=right->next;
          }
        }
       
        if(left==NULL) tmp->next=right;
        if(right==NULL) tmp->next=left;
        
        return ans->next;
        
    }
    
    
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        
        if(head==NULL || head->next==NULL) return head;
        
        Node* mid=middle(head);
        
        Node* left=head;
        Node* right=mid->next;
        mid->next=NULL;
        
        left=mergeSort(left);
        right=mergeSort(right);
        
       return merge(left,right);
   
        
    }
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends