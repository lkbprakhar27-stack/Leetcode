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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int pos = 0;

        // Step 1: Count total nodes
        while (temp != nullptr) {
            temp = temp->next;
            pos++;
        }

        if (n == pos) {
            ListNode* temp1 = head;
            head = head->next;
            delete temp1;
            return head;
        }

        temp = head;
        for (int i = 0; i < pos - n - 1; i++) {
            temp = temp->next;
        }

        ListNode* temp1 = temp->next;
        temp->next = temp1->next;
        delete temp1;

        return head;
    }
};
