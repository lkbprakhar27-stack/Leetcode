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
    ListNode* partition(ListNode* head, int x) {
        if (!head) return nullptr;

        vector<int> v1; 
        vector<int> v2; 

        ListNode* temp = head;
        while (temp != nullptr) {
            if (temp->val < x) {
                v1.push_back(temp->val);
            } else {
                v2.push_back(temp->val);
            }
            temp = temp->next;
        }

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        for (int val : v1) {
            tail->next = new ListNode(val);
            tail = tail->next;
        }
        for (int val : v2) {
            tail->next = new ListNode(val);
            tail = tail->next;
        }

        return dummy->next;
    }
};
