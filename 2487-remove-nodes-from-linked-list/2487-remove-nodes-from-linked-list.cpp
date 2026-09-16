class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while (temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int n = arr.size();
        vector<int> rightMax(n);
        rightMax[n-1] = arr[n-1];
        for (int i = n-2; i >= 0; i--) {
            rightMax[i] = max(arr[i], rightMax[i+1]);
        }

        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= rightMax[i]) {
                result.push_back(arr[i]);
            }
        }

        ListNode dummy(0);
        ListNode* tail = &dummy;
        for (int val : result) {
            tail->next = new ListNode(val);
            tail = tail->next;
        }

        return dummy.next;
    }
};
