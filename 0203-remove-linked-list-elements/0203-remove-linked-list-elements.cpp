class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return nullptr;

        vector<int> v1;
        ListNode* temp = head;
        while (temp != nullptr) {
            if (temp->val != val) {
                v1.push_back(temp->val);
            }
            temp = temp->next;
        }

        if (v1.empty()) return nullptr;

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        for (int x =0;x<v1.size();x++) {
            tail->next = new ListNode(v1[x]);
            tail = tail->next;
        }

        return dummy->next;
    }
};
