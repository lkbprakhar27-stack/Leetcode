class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        head = reverse(head);
        ListNode* curr = head;
        ListNode* last = nullptr;   
        int carry = 0;

        while (curr) {
            int val = curr->val * 2 + carry;
            curr->val = val % 10;
            carry = val / 10;
            last = curr;
            curr = curr->next;
        }

        if (carry) {
            last->next = new ListNode(carry); 
        }

        return reverse(head);
    }

private:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};