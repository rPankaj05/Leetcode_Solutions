/*


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
         map<ListNode*, int > mp;
       while(head1!=NULL){
           mp[head1]++;
           head1=head1->next;
       }
       while(head2!=NULL){
           if(mp[head2]>0) return head2;
           head2=head2->next;
           
       }
       return NULL;
    }
};

*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
// optimal O(n) and O(1)


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       ListNode* curr1=headA, *curr2=headB;
        
       while(curr1!=curr2) {
           curr1= curr1==NULL ? curr1=headB:curr1->next;
           curr2= curr2==NULL ? curr2=headA:curr2->next;
       }
        
        return curr1;
    }
};