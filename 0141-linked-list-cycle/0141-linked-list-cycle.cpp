/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       
        map<ListNode* ,int> mp ;
      
        ListNode * curr=head;
       
        while(curr!=NULL){
            if(mp[curr]>0) return true;
            mp[curr]++;
            curr=curr->next;
        }
 
        return false;
        
    }
};