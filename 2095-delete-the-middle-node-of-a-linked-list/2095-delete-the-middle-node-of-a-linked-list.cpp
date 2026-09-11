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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
        return nullptr;
    }
        ListNode* curr=head;
        ListNode* temp=head;
        int n=0;
        while(temp!=nullptr){
            n++;
            temp=temp->next;
        }
        int mid=n/2;
        int pos=0;
        while(pos<n/2-1){
        curr=curr->next;
        pos++;
        }
        ListNode* todelete=curr->next;
        curr->next=curr->next->next;
        delete todelete;
        return head;
    }
};