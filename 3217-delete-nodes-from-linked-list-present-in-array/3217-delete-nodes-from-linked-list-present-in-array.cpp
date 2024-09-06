/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int,int> mp;
        for(auto it:nums) mp[it]++;
        ListNode* temp = new ListNode(-1);
        ListNode* ans = temp ;
        while(head!=NULL){
            if(mp[head->val]==0){
                ListNode* data = new ListNode(head->val);
                temp->next = data;
                temp = temp->next;
            }
            head = head->next;
        }
        return ans->next;
    }
};