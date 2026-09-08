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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp=head;
        vector<int> v1;
        vector<int> v2;
        int count=0;
        while(temp!=nullptr){
        if(count%2==0){
            v2.push_back(temp->val);
            temp=temp->next;
            count++;
        }else{
            v1.push_back(temp->val);
            temp=temp->next;
            count++;
        }
        }
        ListNode* dummy=new ListNode(0);
        ListNode* tail=dummy;
        for(int i=0;i<v2.size();i++){
        tail->next=new ListNode(v2[i]);
        tail=tail->next;
        }
        for(int i=0;i<v1.size();i++){
            tail->next=new ListNode(v1[i]);
            tail=tail->next;
        }
        return dummy->next;
        }
};