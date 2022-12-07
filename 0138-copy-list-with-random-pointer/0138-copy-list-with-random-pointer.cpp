/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       
        if(head==NULL) return NULL;
        
        Node* clone=new Node(head->val);
        
        Node* curr1=head->next;
        Node* curr2=clone;
        
        while(curr1!=NULL){  
            curr2->next=new Node(curr1->val);
            curr2=curr2->next;
            curr1=curr1->next;
        }
        
        curr1=head;
        curr2=clone;
        
        map<Node*,Node*> mp;
        while(curr1!=NULL){
            mp[curr1]=curr2;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        
        curr1=head;
        curr2=clone;
        
       while(curr1!=NULL){
           curr2->random=mp[curr1->random];
           curr1=curr1->next;
           curr2=curr2->next;
       } 
        return clone;
    }
};