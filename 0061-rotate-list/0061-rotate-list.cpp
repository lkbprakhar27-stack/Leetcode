class Solution{
public:
ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next) return head;

    int pos = 0;
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* temp1 = dummy->next;
    while(temp1 != nullptr) {
        pos++;
        temp1 = temp1->next;
    }

    k = k % pos;              
    if (k == 0) return head;  

    ListNode* temp4 = dummy->next;
    for(int i = 0; i < pos - 1; i++) {
        temp4 = temp4->next;
    }
    ListNode* temp2 = dummy->next;
    for(int i = 0; i < pos - k - 1; i++) {
        temp2 = temp2->next;
    }
    ListNode* temp3 = temp2->next;
    temp2->next = nullptr;
    temp4->next = dummy->next;
    return temp3;
}
};