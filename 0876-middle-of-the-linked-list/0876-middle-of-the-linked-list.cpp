class Solution{
public:
ListNode* middleNode(ListNode* head) {
    ListNode* temp1 = head;
    int pos = 0;
    while(temp1 != nullptr) {
        temp1 = temp1->next;
        pos++;
    }

    int middle = pos/2 + 1;

    ListNode* temp2 = head;
    for(int i = 1; i < middle; i++) {   
        temp2 = temp2->next;
    }
    return temp2;
}
};