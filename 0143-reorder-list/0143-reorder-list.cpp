class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head) return;

        vector<int> vals;
        ListNode* temp = head;
        while (temp) {
            vals.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> reordered;
        int st = 0, end = vals.size() - 1;
        while (st <= end) {
            reordered.push_back(vals[st]);
            if (st != end) reordered.push_back(vals[end]);
            st++;
            end--;
        }

        temp = head;
        for (int val : reordered) {
            temp->val = val;
            temp = temp->next;
        }
    }
};
