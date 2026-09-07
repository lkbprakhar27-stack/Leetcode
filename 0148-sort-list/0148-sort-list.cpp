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
    ListNode* sortList(ListNode* head) {
       ListNode* temp=head;
       vector<int> v1;
       while(temp!=nullptr){
        v1.push_back(temp->val);
        temp=temp->next;
       }

       sort(v1.begin(),v1.end());

       ListNode* dummy=new ListNode(0);
       ListNode* tail=dummy;

       for(int i:v1){
        tail->next=new ListNode(i);
        tail=tail->next;
       }
     
     return dummy->next;
    }
};