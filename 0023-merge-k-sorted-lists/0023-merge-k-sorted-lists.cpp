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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       
        vector<int> vec;
        for(auto it:lists){
            while(it!=NULL){
                vec.push_back(it->val);
                it=it->next;
            }
        }
    sort(vec.begin(),vec.end());
    if(vec.size()==0) return NULL;    
   ListNode* ans=new ListNode(vec[0]);
    ListNode* ansf=ans;
    for(int i=1;i<vec.size();i++){
        ListNode* tmp=new ListNode(vec[i]);
        ans->next=tmp;
        ans=ans->next;
    }
        return ansf;
    }
};