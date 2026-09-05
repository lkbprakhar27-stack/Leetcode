class Solution{
    public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    if(!head || left == right) return head;

    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode* pointsLeft = dummy;
    for(int i = 0; i < left - 1; i++) {
        pointsLeft = pointsLeft->next;     
    }

    ListNode* temp1 = pointsLeft->next;      
    ListNode* temp2 = temp1;
    for(int i = 0; i < right - left; i++) {
        temp2 = temp2->next;                
    }
    ListNode* afterRight = temp2->next;       

    vector<int> v1;
    ListNode* cur = temp1;
    for(int i = 0; i <= right - left; i++) {
        v1.push_back(cur->val);
        cur = cur->next;
    }

    int st = 0, end = v1.size() - 1;
    while(st < end) {
        swap(v1[st], v1[end]);
        st++;
        end--;
    }

    ListNode* newnode = new ListNode(v1[0]);
    ListNode* hello = newnode;
    for(int i = 1; i < v1.size(); i++) {
        newnode->next = new ListNode(v1[i]);
        newnode = newnode->next;
    }
    newnode->next = afterRight;

    pointsLeft->next = hello;    

    ListNode* newHead = dummy->next;
    delete dummy;
    return newHead;
}
};